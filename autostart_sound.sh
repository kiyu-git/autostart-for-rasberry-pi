#!/bin/sh
while true
do
hosted=`grep -c "dat:" /home/pi/.homebase.yml`
cd /home/pi/wiringPi/examples
watch -n 300 ./vogelhous $hosted
sleep 600;
done &
