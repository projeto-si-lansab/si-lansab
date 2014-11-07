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

PRE_LAUNCH = 'PRE LAUNCH'
PHASE_CHANGE = 'PHASE CHANGE'
PHASE_1 = 'PHASE 1'
PHASE_2 = 'PHASE 2'
PHASE_3 = 'PHASE 3'
PHASE_4 = 'PHASE 4'
PHASES = [PHASE_1, PHASE_2, PHASE_3, PHASE_4]

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
    drone_status = PRE_LAUNCH
    drone_phase = 0

    running = True

    while running:
        connection, client_address = sock.accept()
        try:
            print >>sys.stderr, 'connection from', client_address
            data = connection.recv(256)
            print >>sys.stderr, 'received "%s"' % data
            if data:
                data = json.loads(data.split('\x00')[0])
                rocket_launch = data['RocketLaunch']
                rocket_destroy = data['RocketDestroy']
                change_state = data['ChangeState']

                if rocket_destroy:
                    print '--- Rocket Destroyed ---'
                    # drone.halt()
                elif rocket_launch and drone_status == PRE_LAUNCH:
                    print '--- Lauching ARDrone ---'
                    drone_status = PHASE_1
                    drone_phase = 1
                    # drone.takeoff()
                elif drone_status in PHASES and change_state and drone_status != PHASE_CHANGE:
                    print '--- Changing Phase ---'
                    drone_status = PHASE_CHANGE
                    # drone.event_turnaround()
                elif drone_status == PHASE_CHANGE and not change_state:
                    print '--- Entering Phase ---'
                    drone_status = PHASES[drone_phase]
                    try:
                        drone_phase += 1
                    except IndexError:
                        print "--- Invalid Phase Change. Shutting Down.---",
                        # drone.halt()
                elif drone_phase in PHASES:
                    # drone.move_up()

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
