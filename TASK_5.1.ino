import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)

GPIO.setup(3, GPIO.OUT)

try:
   while 1:
      GPIO.output(3, GPIO.HIGH)
      time.sleep(0.25)
      GPIO.output(3.GPIO.LOW)
      time.sleep(0.25)

except KeyboardInterrupt;
      GPIO.cleanup()
