#!/bin/bash
echo "start"
lxterminal -t "Auto start for sound" --command="/bin/bash --init-file /home/pi/autostart_sound.sh"
lxterminal -t "Auto start for chromium" --command="/bin/bash --init-file /home/pi/autostart_chromium.sh"
homebase
