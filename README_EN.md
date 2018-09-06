![logo](/pic/logo.jpg)                                     

# BPI:bit

[English] | [[Chinese]](/README.md)

> - [Official English Forum](http://forum.banana-pi.org/c/bpi-webduino/BPI-Webduino)
> - [Official Chinese Forum](https://forum.banana-pi.org.cn/c/bpi-webduino)
> - [Webduino China Mainland](https://webduino.com.cn/site/)
> - [webduino](https://webduino.io/)

![](https://forum.banana-pi.org.cn/uploads/default/original/2X/7/701a545ab3d423851845b746f7cc4c588c36a561.JPG)

This product uses ESP-WROOM-32 as the core design, supports Bluetooth, BLE and other communication methods. BPI:bit will be fully compatible with Micro:bit.

> ESP-WROOM-32
> 448KB ROM
> 520KB RAM
> Wi-Fi&BLE

The front has 25 (5*5) programmable LED lights, single GPIO control, 16777216 color display; and there are 2 user-programmable keys on the front.

## Catalog reading

1. [`doc`](/doc)There are the schematic of the BPI:bit board and the datesheets for each part of the ESP-WROOM-32, WS2812, MPU9250, etc.

2. [`pic`](/pic)There are the photos and sketches of BPI:bit board

3. [`Code`](/Code)There are the BPI:bit board function test code

4. [`programming`](/programing)There are introduction of various burning methods of BPI:bit board

5. [`Bin`](/Bin)BPI:bit Board adapted Webduino\MicroPython\UnitTest\Other firmware

## Pin Define

<table>
  <tr><td>Pin Name</td><td>Analog Function1</td><td>Analog Function2</td><td>Function1</td><td>Function2</td><td>Power</td></tr>
  <tr><td>P3</td><td>ADC2_CH4</td><td></td><td>GPIO13</td><td></td><td></td></tr>
  <tr><td>P0</td><td>ADC2_CH8</td><td>DAC_1</td><td>GPIO25</td><td></td><td></td></tr>
  <tr><td>P4</td><td>ADC2_CH3</td><td></td><td>GPIO16</td><td></td><td></td></tr>
  <tr><td>P5</td><td>ADC1_CH7</td><td></td><td>GPIO35</td><td></td><td></td></tr>
  <tr><td>P6</td><td>ADC2_CH5</td><td></td><td>GPIO12</td><td></td><td></td></tr>
  <tr><td>P7</td><td>ADC2_CH6</td><td></td><td>GPIO14</td><td></td><td></td></tr>
  <tr><td>P1</td><td>ADC1_CH4</td><td></td><td>GPIO32</td><td></td><td></td></tr>
  <tr><td>P8</td><td></td><td></td><td>GPIO16</td><td></td><td></td></tr>
  <tr><td>P9</td><td></td><td></td><td>GPIO17</td><td></td><td></td></tr>
  <tr><td>P10</td><td>ADC2_CH9</td><td>DAC_2</td><td>GPIO26</td><td></td><td></td></tr>
  <tr><td>P11</td><td>ADC2_CH7</td><td></td><td>GPIO27</td><td></td><td></td></tr>
  <tr><td>P12</td><td>ADC2_CH2</td><td></td><td>GPIO02</td><td></td><td></td></tr>
  <tr><td>P2</td><td>ADC1_CH5</td><td></td><td>GPIO33</td><td></td><td></td></tr>
  <tr><td>P13</td><td></td><td></td><td>GPIO18</td><td>SPI_SCK</td><td></td></tr>
  <tr><td>P14</td><td></td><td></td><td>GPIO19</td><td>SPI_MISO</td><td></td></tr>
  <tr><td>P15</td><td></td><td></td><td>GPIO23</td><td>SPI_MOSI</td><td></td></tr>
  <tr><td>P16</td><td></td><td></td><td>GPIO05</td><td>SPI_SS</td><td></td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>3V3</td><td></td><td></td><td></td><td></td><td>POWER:3V3</td></tr>
  <tr><td>P19</td><td></td><td></td><td>GPIO22</td><td>I2C_SCL</td><td></td></tr>
  <tr><td>P20</td><td></td><td></td><td>GPIO21</td><td>I2C_SDA</td><td></td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
  <tr><td>GND</td><td></td><td></td><td></td><td></td><td>GROUND</td></tr>
</table>


## LED Number

The BPI:bit board is soldered with 25 (numbered 0-24) 16 million-color full-color LEDs (WS2812) according to a 5*5 arrangement. All LED controls use only one pin (GPIO4) to complete all control.At the same time, the BPI:bit board also reserves the LED power control pin (GPIO2), which can turn off the power of all the LEDs by pulling down the GPIO2 point.

LED sort(5*5)：

<table>
  <tr>  <td>20</td>  <td>15</td>  <td>10</td>  <td>5</td>  <td>0</td>  </tr>
  <tr>  <td>21</td>  <td>16</td>  <td>11</td>  <td>6</td>  <td>1</td>  </tr>
  <tr>  <td>22</td>  <td>17</td>  <td>12</td>  <td>7</td>  <td>2</td>  </tr>
  <tr>  <td>23</td>  <td>18</td>  <td>13</td>  <td>8</td>  <td>3</td>  </tr>
  <tr>  <td>24</td>  <td>19</td>  <td>14</td>  <td>9</td>  <td>4</td>  </tr>
</table>

## Interface

![Interface EN](/pic/Interface_EN.JPG)

## Silkscreen

![](/pic/top.png)

![](/pic/bot.png)
