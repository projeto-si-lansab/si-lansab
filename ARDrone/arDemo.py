#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
demo app for the AR.Drone.

this application allows to control the drone and see the drone's video stream.
"""

import socket
import libARDrone
import os, os.path
import time
import sys
import json

SRV_ADDR = "/tmp/socket"

PRE_LAUNCH = 'PRE LAUNCH'
LAUNCHED = 'LAUNCHED'

scade_socket = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)

# -------------------------------------------------------------------------------------------------
# main
# -------------------------------------------------------------------------------------------------
def main():

    # Make sure the socket does not already exist
    try:
        os.unlink(SRV_ADDR)
    except OSError:
        if os.path.exists(SRV_ADDR):
            raise

    # Create a UDS socket
    scade_socket.bind(SRV_ADDR)

    # Listen for incoming connections
    scade_socket.listen(5)

    if 'DEBUG' not in locals() and 'DEBUG' not in globals():
        drone = libARDrone.ARDrone()
        drone.reset()

    drone_status = PRE_LAUNCH
    running = True
    # connection, client_address = scade_socket.accept()

    while running:
        try:
            connection, client_address = scade_socket.accept()
            print >>sys.stderr, 'connection from', client_address
            data = connection.recv(128)
            print >>sys.stderr, 'received "%s"' % data
            if data:
                # data = json.loads(data.split('\x00')[0])
                data = json.loads(data)
                rocket_launch = data['RocketLaunch']
                rocket_destroy = data['RocketDestroy']

                if rocket_destroy and drone_status == LAUNCHED:
                    print '--- Rocket Destroyed ---'
                    running = False
                    # drone.land()
                    # drone_status = PRE_LAUNCH
                elif rocket_launch and drone_status == PRE_LAUNCH:
                    print '--- Lauching ARDrone ---'
                    if 'DEBUG' not in locals() and 'DEBUG' not in globals():
                        drone.takeoff()
                    drone_status = LAUNCHED
            else:
                print >>sys.stderr, 'no more data from', client_address
        except KeyboardInterrupt:
            print '--- Finishing application ---'
            running = False
        finally:
            # Clean up the connection
            connection.close()

        if 'DEBUG' not in locals() and 'DEBUG' not in globals():
            bat = drone.navdata.get( 0, dict ()).get( "battery", 0 )
            print "bat: ", bat

    print "Shutting down...",

    if 'DEBUG' not in locals() and 'DEBUG' not in globals():
        drone.land()
        drone.halt()

    print "Ok."

# -------------------------------------------------------------------------------------------------
# the bootstrap process
# -------------------------------------------------------------------------------------------------
if ( "__main__" == __name__ ):

    main()

# < THE END >-------------------------------------------------------------------------------------- #
