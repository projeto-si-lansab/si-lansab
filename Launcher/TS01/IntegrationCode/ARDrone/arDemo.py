#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
demo app for the AR.Drone.

this application allows to control the drone and see the drone's video stream.
"""

import socket
import libARDrone as libARDrone
import os, os.path
import time
import sys
import json

SRV_ADDR = "/tmp/socket"

# -------------------------------------------------------------------------------------------------
# main
# -------------------------------------------------------------------------------------------------
def main ():

    # Make sure the socket does not already exist
    try:
        os.unlink(SRV_ADDR)
    except OSError:
        if os.path.exists(SRV_ADDR):
            raise

    # Create a UDS socket
    sock = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)

    sock.bind(SRV_ADDR)

    # Listen for incoming connections
    sock.listen(1)

    # drone = libARDrone.ARDrone ()
    # drone.reset ()

    running = True

    while running:
        connection, client_address = sock.accept()
        try:
            print >>sys.stderr, 'connection from', client_address
            data = connection.recv(256)
            print >>sys.stderr, 'received "%s"' % data
            if data:
		data = json.loads(data.split('\x00')[0])
                print "RocketLaunch", data['RocketLaunch']
                print "RocketDestroy", data['RocketDestroy']
            else:
                print >>sys.stderr, 'no more data from', client_address
        finally:
            # Clean up the connection
            connection.close()

        #bat = drone.navdata.get ( 0, dict ()).get ( "battery", 0 )
        #print "bat: ", bat

    print "Shutting down...",
    #drone.halt ()
    print "Ok."

# -------------------------------------------------------------------------------------------------
# the bootstrap process
# -------------------------------------------------------------------------------------------------
if ( "__main__" == __name__ ):

    main ()

# < THE END >-------------------------------------------------------------------------------------- #
