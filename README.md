## Braidboard
#### current version: 0119b

<hr>

This began as a sort of hardware version of [BriadLab](https://github.com/isaac-art/BraidLab) but is becoming some kind of cellular moving image organism or distributed display thing.
Influenced in some ways by [T2Tile](https://www.youtube.com/channel/UC1M91QuLZfCzHjBMEKvIc-A) but doing different less ambitious things.

<hr>

### Activity

- [29/01/19] Aim to get some coding done this weekend 02/02/19.

![assembled img](https://raw.githubusercontent.com/isaac-art/Braidboard/master/PHOTOS/020119_250119/IMG_2944.jpg)

- [29/01/19] PCB has arrived! assembled 18 tiles

- [26/01/19] PCB arrives on 29/01/19

![plan img](https://raw.githubusercontent.com/isaac-art/Braidboard/master/PHOTOS/020119_250119/Image.jpeg)

<hr>


### Requirements
* using the convenience of arduino, as i can use the arduino as isp to program the attinys
* for drawing to the screen i am using [datacute's Tiny4kOLED Library](https://github.com/datacute/Tiny4kOLED/) but i might strip it down some more if i end up needing to

<hr>


### Hardware
* pcb 0119b[front](https://github.com/isaac-art/Braidboard/blob/master/BOARD/0119b/braidboard_front.png) and back [back](https://github.com/isaac-art/Braidboard/blob/master/BOARD/0119b/braidboard_back.png)
* attiny84 (0119b using SOIC footprint) - [datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/8006S.pdf)
* OLED 128x32 I2C - the four pin type you find on [ebay](https://www.ebay.co.uk/itm/IIC-I2C-0-91-128x32-white-OLED-LCD-Display-Module-3-3v-5v-For-Arduino-PIC-HC/173751114146?hash=item28745f99a2:g:lKYAAOSwu05bQsUy:rk:1:pf:1&frcectupt=true)
* a bunch of breadboard spaced header pins & sockets
* power from a socket, or can use CR2025 coin cells, i'm gonna try get it hooked to a solar panel
* i am avoiding making any enclosures at the moment

<hr>

### Specs
* attiny84 has 8k of space which should be plently for the first braid animation tests
* 3V-5V
* 12mm x 40 mm tiles - not sure how deep they are yet till i assemble one, should sit pretty flush but we'll see how they go

<hr>

### Futures
* bigger IC ?
* smaller IC !
* bigger/smaller screen ?
* colour ?
* add 20Mhz xtal ?

<hr>

### Pricing

| Item | ≈price | link |
|------|--------|------|
| attiny84 soic | ≈£0.648 | [mouser](https://www.mouser.co.uk/_/?Keyword=attiny84&FS=True) |
| PCB: 12mm x 40mm 2 layer  lead-free | ≈£1.50 (@x10) | [pcbway](https://www.pcbway.com/) |
| 14 x male header 2.54 mm | ≈£0.70 | [amazon](https://www.amazon.co.uk/Pack-Single-2-54-Header-Connector/dp/B06XR8CV8P/ref=pd_sbs_23_3?_encoding=UTF8&pd_rd_i=B06XR8CV8P&pd_rd_r=c2677cbc-2190-11e9-9f02-2dcfb0cd6a52&pd_rd_w=iPidB&pd_rd_wg=ruh13&pf_rd_p=18edf98b-139a-41ee-bb40-d725dd59d1d3&pf_rd_r=H0YAFN7391P4WH151Q0J&psc=1&refRID=H0YAFN7391P4WH151Q0J) |
| Board Total | ≈£2.85 | 👍 |


<hr>
