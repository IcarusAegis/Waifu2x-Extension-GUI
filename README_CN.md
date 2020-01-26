# Waifu2x-Extension-GUI
#### 下载: https://github.com/AaronFeng753/Waifu2x-Extension-GUI/releases/latest
#### 更新日志: https://github.com/AaronFeng753/Waifu2x-Extension-GUI/blob/master/Change_log.md
#### 捐赠列表: https://github.com/AaronFeng753/Waifu2x-Extension-GUI/blob/master/Donate_list.md
#### 如果README内的图片无法正常加载,请[打开此链接查看码云内存储的README.md](https://gitee.com/aaronfeng0711/Waifu2x-Extension-GUI/blob/master/README.md)或者合法的连接国际网络后刷新页面, 当然您也可以[按照这个教程来尝试修复github图片加载的问题](https://github.com/AaronFeng753/Github_dns_hosts#github_dns_hosts).
# Waifu2x-Extension-GUI是什么?
 借助深度卷积神经网络对`图片` & `GIF` & `视频`进行超分辨率放大(即放大与降噪).

基于 `Waifu2x-ncnn-vulkan` 和 `Waifu2x-converter` . 

借助waifu2x-ncnn-vulkan, Waifu2x-Extension-GUI 可以借助任何支持`Vulkan`的显卡进行运算,即便是Intel的集成显卡. 

如果您的显卡不支持vulkan, 您还可以将引擎切换为Waifu2x-converter,同样可以很快的对图像进行放大与降噪.(已集成在release内)

![mainwindow](/Screenshot/mainwindow_cn.jpg)

#### 已经在 `AMD` RX 550, `NVIDIA` GeForce GTX 1070 和 `Intel` UHD 620 上通过测试.

# 主要特性
- 简单易用的图形用户界面
- 支持批量处理静态图片，gif和视频
- 支持动漫风格和3D写实风格的图像（即支持所有图像风格）
- 集成多个引擎，强大的硬件兼容性，支持借助NVIDIA、Intel、AMD进行运算
- 无限放大倍数
- 自定义输出分辨率（支持图片&GIF&视频）
- 灵活的多线程管理
- 支持将放大&降噪后的图片另存为.jpg并自动进行无损压缩
- 支持对放大&降噪后的gif自动进行体积优化
- 兼容性测试
- 多语言（支持简体中文）
- 支持存储个性化设置并在启动时自动应用
- 持续更新
- 以及更多

# 示例
### **`图片`** : https://github.com/AaronFeng753/Waifu2x-Extension-GUI/tree/master/Samples/image

### **`视频`** : https://github.com/AaronFeng753/Waifu2x-Extension-GUI/tree/master/Samples/video

### **`GIF`** : https://github.com/AaronFeng753/Waifu2x-Extension-GUI/tree/master/Samples/gif

#### 原图 2D动漫图片 480x300 (.jpg 93.2 KB):
![Original Imgae](/Samples/image/Original_[480x300].jpg)

#### 经过8x放大, 3级降噪和压缩后 3840x2400 (.jpg 525 KB):
![Scaled Imgae](/Samples/image/Waifu2x_8x_[3840x2400].jpg)

#### 对比
![Comparison](/Samples/image/Comparison.png)

#### 原图 3D写实图片 800x535 (.jpg 81.4 KB):
![Original Imgae](/Samples/image/deer.jpg)

#### 经过4x放大,2级降噪和压缩后 3200x2140 (.jpg 881 KB):
![Scaled Imgae](/Samples/image/deer_Waifu2x.jpg)

#### 原图 GIF 500 x 372 (493 KB):
![Original GIF](/Samples/gif/2_original.gif)

#### 经过2x放大,2级降噪和gif优化后 1000 x 744 (3.77 MB):
![Original GIF](/Samples/gif/2_waifu2x_compressed.gif)

### `github不支持在线播放视频, 请点击下方链接查看视频示例:`
### **`视频`** : https://github.com/AaronFeng753/Waifu2x-Extension-GUI/tree/master/Samples/video

# 如何修复兼容性问题 :
#### waifu2x-ncnn-vulkan: 重装与更新显卡驱动.
#### waifu2x-converter: 换个新电脑.
#### Anime4k: 安装最新版的 JDK and JRE

# 集成组件(releases内):
- waifu2x-ncnn-vulkan version Nov 4, 2019

- Anime4K Java v0.9 Beta

- ffmpeg version 4.2.1

- gifsicle version 1.92

- Waifu2x-converter version: 2015-11-30T02:17:24

- ImageMagick 7.0.9-12-portable-Q16-x64

# 鸣谢:
- waifu2x-ncnn-vulkan: https://github.com/nihui/waifu2x-ncnn-vulkan

- FFmpeg: https://ffmpeg.org/

- Gifsicle: https://www.lcdf.org/gifsicle/

- Anime4K: https://github.com/bloc97/Anime4K

- Waifu2x-converter: https://github.com/WL-Amigo/waifu2x-converter-cpp

- ImageMagick: http://www.imagemagick.org/

- Icons made by : Freepik (https://www.flaticon.com/authors/freepik) From Flaticon : https://www.flaticon.com/

# `捐赠`
### [捐赠列表](https://github.com/AaronFeng753/Waifu2x-Extension-GUI/blob/master/Donate_list.md)
#### 如果donate(捐赠)二维码图片无法正常加载,请[打开此链接查看](https://gitee.com/aaronfeng0711/Waifu2x-Extension-GUI/raw/master/donate.jpg)或者合法的连接国际网络后刷新页面, 当然您也可以[按照这个教程来尝试修复github图片加载的问题](https://github.com/AaronFeng753/Github_dns_hosts#github_dns_hosts).
![donate](/donate.jpg)