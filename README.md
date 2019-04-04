![logo](/pic/logo.jpg)

# BPI:bit

[Chinese] | [[English]](/README_EN.md)

> - [官方英文论坛](http://forum.banana-pi.org/c/bpi-webduino/BPI-Webduino)
> - [官方中文论坛](https://forum.banana-pi.org.cn/c/bpi-webduino)
> - [Webduino中国大陆](https://webduino.com.cn/site/)
> - [webduino](https://webduino.io/)

![](https://forum.banana-pi.org.cn/uploads/default/original/2X/7/701a545ab3d423851845b746f7cc4c588c36a561.JPG)

本产品采用ESP-WROOM-32模组作为核心进行设计，支持蓝牙、BLE等多种通信方式。BPI:bit将兼容Micro：bit大部分配件以及用法。

> ESP-WROOM-32
> 448KB ROM
> 520KB RAM
> Wi-Fi&BLE

正面具有25颗（5*5）可编程LED灯，所有LED通过单GPIO控制，单颗16777216色显示；并且正面还具有2个用户可编程按键、两个光线传感器以及一个温度传感器。

>  本板子分1.2和1.4版本，版本号标识在板子背面右下角

# BPI:BIT 使用方法：

- #### via Arduino

  [BPI:BIT Wiki](http://wiki.banana-pi.org/BPI-Bit#Arduino)


  1. ###### Arduino IDE：

      Github:[BPI-STEAM/BPI-BIT-Arduino_IDE](https://github.com/BPI-STEAM/BPI-BIT-Arduino_IDE)

      [BPI:BIT Aerduino IDE Wiki](http://wiki.banana-pi.org/BPI-Bit#Arduino_IDE)

  2. ###### Platform IO:
  
      Github:[BPI-STEAM/BPI-BIT-PlatformIO](https://github.com/BPI-STEAM/BPI-BIT-PlatformIO)

      [BPI:BIT Platform IO Wiki](http://wiki.banana-pi.org/BPI-Bit#Platform_IO)


- #### via MicroPython

- #### via Webduino

## BPI:Bit Webduino 超快速上手指南

[BPI-Bit-Webduino超快速上手指南](/doc/BPI-Bit-Webduino超快速上手指南/BPI-Bit-Webduino超快速上手指南.md)     ----[{PDF版}](/doc/BPI-Bit-Webduino超快速上手指南/BPI-Bit-Webduino超快速上手指南.pdf)

## 目录导读

1. [`doc`](/doc)存放BPI:bit板的原理图以及ESP-WROOM-32、WS2812、MPU9250等各个部分的datesheet

2. [`pic`](/pic)存放BPI:bit板的照片与各种示意图

3. [`code`](/code)存放BPI:bit板基础function测试代码

## 引脚定义

![detail-04](https://webduino.com.cn/site/img/tutorials/zh_cn/detail-04.jpg)

<table>
  <tr><td>Pin Name</td><td>Analog Function1</td><td>Analog Function2</td><td>Function1</td><td>Function2</td><td>Power</td></tr>
  <tr><td>P3</td><td>ADC2_CH4</td><td></td><td>GPIO13</td><td></td><td></td></tr>
  <tr><td>P0</td><td>ADC2_CH8</td><td>DAC_1</td><td>GPIO25</td><td></td><td></td></tr>
  <tr><td>P4</td><td>ADC2_CH3</td><td></td><td>GPIO15</td><td></td><td></td></tr>
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

## LED编号

BPI:bit 板按照5*5排列方式焊接了25颗(编号0~24)1600万色全彩LED(WS2812),所有的LED的控制仅使用一个引脚(GPIO4)即可完成全部控制，同时BPI:bit板还预留LED电源控制引脚(GPIO2)，可以通过拉低GPIO2的点位来关闭全部LED的电源。

LED序号排布方式如下(5*5)：

<table>
  <tr>  <td>20</td>  <td>15</td>  <td>10</td>  <td>5</td>  <td>0</td>  </tr>
  <tr>  <td>21</td>  <td>16</td>  <td>11</td>  <td>6</td>  <td>1</td>  </tr>
  <tr>  <td>22</td>  <td>17</td>  <td>12</td>  <td>7</td>  <td>2</td>  </tr>
  <tr>  <td>23</td>  <td>18</td>  <td>13</td>  <td>8</td>  <td>3</td>  </tr>
  <tr>  <td>24</td>  <td>19</td>  <td>14</td>  <td>9</td>  <td>4</td>  </tr>
</table>

## 接口图

![detail-05](https://webduino.com.cn/site/img/tutorials/zh_cn/detail-05.jpg)

![Interface zh_CN](/pic/Interface_zh_CN.JPG)


