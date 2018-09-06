## BPI:bit MPU9250 Test Demo!

 ![bpi:bit](https://forum.banana-pi.org.cn/uploads/default/original/2X/e/e5557db2dec86b6bf402c5eb4d35b5c1bb668f0e.JPG)

> ### 开发平台：
> VS Code1.21.0

> PlatformIO 3.5.3a7

----
> 验证：串口：115200-1-8-N
----
> `/src/main.cpp`为测试程序主体代码，

#### 使用方法：
- 编译：
终端内执行`platformio run`

- 烧录:
终端内执行`platformio run --target upload`

（需要提前预装`Atom/VSCode`软件，安装`PlatformIO`扩展，并且在`PlatformIO`里面下载`ESP32`平台）本段代码可以用于`Arduino`编译，但需要安装平台支持与库扩展等等。[安装教程](/programing/Arduino_IDE)

#### 主要测试功能介绍：

- 连续读取MPU9250的数据，将数据简单分类发送至串口。数据内容包括（gyro / magnetometer / accelerometer）。
