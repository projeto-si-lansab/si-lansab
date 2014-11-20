from ev3.ev3dev import Motor
import config
import math
import time

class Lego:
    def __init__(self):
        self.idle = True
        self.stagenum = 0
        self.medium_motor = Motor(port=Motor.PORT.A)
        self.left_large_motor = Motor(port=Motor.PORT.B)
        self.right_large_motor = Motor(port=Motor.PORT.C)
        
    
    def __del__(self):
        self.stop_large_motors()
        self.stop_medium_motors()
        
    def detach(self):
        for i in range(2, 0, -1):
            self.medium_motor.position = 0
            self.medium_motor.run_position_limited(position_sp=((-1) ** i) * 115,
                                                   speed_sp=config.MEDIUM_MOTOR_SPEED,
                                                   stop_mode=Motor.STOP_MODE.BRAKE)
            time.sleep(0.5)
        
    def reset(self):
        self.stop()
        self.stagenum = 0
    
    def run(self):
        for i in range(self.stagenum, len(config.STAGES)):
            if self.idle:
                break
            self.run_large_motors(config.STAGES[i])
            self.stop_large_motors()
            self.detach()
            self.stagenum += 1
    
    def run_large_motors(self, stage):
        for s in stage:
            if stage.index(s) == 0:
                self.left_large_motor.run_forever(speed_sp=s[0])
                self.right_large_motor.run_forever(speed_sp=s[1])
            else:
                self.set_speed(s[0], s[1])
            self.sleep(s[2])
    
    def set_speed(self, left_speed, right_speed):
        if self.left_large_motor.regulation_mode:
            self.left_large_motor.pulses_per_second_sp = left_speed
            self.right_large_motor.pulses_per_second_sp = right_speed
        else:
            self.left_large_motor.duty_cycle_sp = left_speed 
            self.right_large_motor.duty_cycle_sp = right_speed
    
    def sleep(self, secs):
        x = math.floor(secs)
        y = secs - x
        if y != 0:
            time.sleep(y)
        for i in range(int(x)):
            if self.idle:
                break
            time.sleep(1)
    
    def start(self):
        self.idle = False
        self.run()
    
    def stop(self):
        self.idle = True
    
    def stop_large_motors(self):
        self.left_large_motor.stop()
        self.right_large_motor.stop()
    
    def stop_medium_motors(self):
        self.medium_motor.stop()