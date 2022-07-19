# 基于STM32的太空人时钟表盘

<img src="images\STM32-Spaceman.jpg">

## 元件清单(components list)
- stm32f103c8t6
- OLED ssd1306显示屏
- ds1302时钟模型
- dht11温湿度传感器
  
## 使用说明
- 使用STM32CubeIDE导入工程 (Use STM32CubeIDE to import the project)
- IO连接关系
  - PB3 - OLED SCK
  - PB4 - OLED SDA
  - PA5 - DHT11 DAT
  - PA0 - DS1302 RST
  - PA1 - DS1302 CLK
  - PA2 - DS1302 DAT

## 其他
- 演示视频(Demo): [B站](https://www.bilibili.com/video/BV1LB4y187Ct)
