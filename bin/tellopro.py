from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff'))
command_lst.append(TelloPro.get_instance('up'))
command_lst.append(TelloPro.get_instance('down'))
command_lst.append(TelloPro.get_instance('left'))
command_lst.append(TelloPro.get_instance('right'))
command_lst.append(TelloPro.get_instance('forward'))
command_lst.append(TelloPro.get_instance('back'))
command_lst.append(TelloPro.get_instance('cw'))
command_lst.append(TelloPro.get_instance('ccw'))
command_lst.append(TelloPro.get_instance('land'))

for command in command_lst:
	tello.send_command_instance(command)
