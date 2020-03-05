import serial
import time

comm = serial.Serial('/dev/ttyACM0', 9600)

while True:
    comm.write(str.encode('1'))
    print('Light ON')
    time.sleep(1) 
    comm.write(str.encode('0')) 
    print('Light OFF')
    time.sleep(1)
