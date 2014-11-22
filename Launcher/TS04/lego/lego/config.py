from lib.bluetooth_socket import BlueToothSocket
#from lib.tcp_socket import TCPSocket

HOST = ''
PORT = 1 #50001
Socket = BlueToothSocket #TCPSocket

MEDIUM_MOTOR_SPEED = 500
MEDIUM_MOTOR_ROTATION_ANGLE = 115

'''
stage 0: [[left speed, right speed, time], [left speed, right speed, time], ...],
stage 1: [[left speed, right speed, time], [left speed, right speed, time], ...],
...
'''
STAGES = [
          [[40, 40, 6.5]],  # stage 0: 6.5 seconds 
          [[40, 20, 5]],    # stage 1: 5 seconds 
          [[40, 20, 7]],    # stage 2: 7 seconds
          [[20, 10, 30.5]]  # stage 3: 30.5 seconds
         ]