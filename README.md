# Auto startup files for rasberry pi
When rasberry pi boots, below apps automatically run

- homebase
- wiringPi
- chromium

clone all autostart files under /home/pi/

```terminal.pi
pi@raspberrypi:~$ ls   
autostart_chromium.sh						 
autostart_homebase.sh						 
autostart.sh							 
autostart_sound.sh						  
```


## Auto start fist terminal window
modify an autostart file following [this step1](https://www.raspberrypi-spy.co.uk/2014/05/how-to-autostart-apps-in-rasbian-lxde-desktop/)
`~/.config/lxsession/LXDE-pi/autostart`

```~/.config/lxsession/LXDE-pi/autostart
@lxpanel --profile LXDE-pi
@pcmanfm --desktop --profile LXDE-pi
# @xscreensaver -no-splash
# @point-rpi

@xset s off
@xset -dpms
@bash /home/pi/autostart.sh
```
