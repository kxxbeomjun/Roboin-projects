import serial
from lcd_i2c import *

SER = serial.Serial('/dev/ttyGS0', 9600)

def main():
	lcd_init()
	while True:
		s = SER.readline().decode().strip()
		lcd_string(s + '=', LCD_LINE_1)
		lcd_string(str(eval(s)), LCD_LINE_2)

if __name__ == '__main__':
	try: main()
	except KeyboardInterrupt: pass
	finally: lcd_byte(0x01, LCD_CMD)