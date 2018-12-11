# EXOCTOROK PLANCK LAYOUT
### for 4x16 ortholinear qmk keyboards
  
This layout was developed and altered over several years of using programmable mechanical keyboards. It began with my first, an OLKB Planck rev.4;
continued, slightly altered, in my Minivan rev.4; and now lives on my OLKB Planck Lite (hence the led.c file).  
  
#### Features
- Split spacebar-style layout
    - I was a fan of using my Planck rev.4 in a grid layout and after moving into the Minivan, became incredible acustomed to having a different key
    under each thumb. This has transferred into this board. If I had bought it firsthand, it would definitely be in grid, rather than MIT layout. But I
    fear desoldering this one, so I am leaving it as is. (plus, it gives me a nice solid 2u key to smack as my return key).
- Custom Light-On-Tap Function
    - When I first saw this board and its matrix-leds, the first thing I wanted to do was see if I could implement a simple LED function to allow all of the
    LEDs to be turned off on idle, and only the pressed keys to be turned on. I managed to do this, but there is one issue that I would love to overcome. That
    issue is that is if multiple keys are held at the same time, only the last one pressed will be illuminated. I am not currently sure if there is a fix for
    this without enabling the matrix_scan function (which I do not want to do as it slows the scanning of the keyboard noticeably). I'll take typing over lighting
    any day of the week.


