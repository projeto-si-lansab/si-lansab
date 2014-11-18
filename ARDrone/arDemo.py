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
STAGE_CHANGE = 'STAGE CHANGE'
STAGE_1 = 'STAGE 1'
STAGE_2 = 'STAGE 2'
STAGE_3 = 'STAGE 3'
STAGE_4 = 'STAGE 4'
STAGES = [STAGE_1, STAGE_2, STAGE_3, STAGE_4]

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

    # drone = libARDrone.ARDrone()
    # drone.reset()
    drone_status = PRE_LAUNCH
    drone_stage = 0

    running = True

    while running:
        try:
            connection, client_address = scade_socket.accept()
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
                    # drone.land()
                elif rocket_launch and drone_status == PRE_LAUNCH:
                    print '--- Lauching ARDrone ---'
                    drone_status = STAGE_1
                    drone_stage = 1
                    # drone.takeoff()
                elif drone_status in STAGES and change_state and drone_status != STAGE_CHANGE:
                    print '--- Changing Stage ---'
                    drone_status = STAGE_CHANGE
                    # drone.event_turnaround()
                elif drone_status == STAGE_CHANGE and not change_state:
                    print '--- Entering Stage ---'
                    drone_stage += 1
                    try:
                        drone_status = STAGES[drone_stage]
                    except IndexError:
                        print "--- Invalid Stage Change. Shutting Down.---",
                        running = False
                elif drone_stage in STAGES:
                    # drone.move_up()
                    pass
            else:
                print >>sys.stderr, 'no more data from', client_address
        finally:
            # Clean up the connection
            connection.close()

        #bat = drone.navdata.get ( 0, dict ()).get ( "battery", 0 )
        #print "bat: ", bat

    print "Shutting down...",
    # drone.land()
    # drone.halt ()
    print "Ok."

# -------------------------------------------------------------------------------------------------
# the bootstrap process
# -------------------------------------------------------------------------------------------------
if ( "__main__" == __name__ ):

    main()

# < THE END >-------------------------------------------------------------------------------------- #
