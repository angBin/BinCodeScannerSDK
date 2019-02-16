# BinCodeScannerSDK

[BinCodeScannerSDK](https://github.com/angBin/BinCodeScannerSDK) 是一个扫码器。

# 我的优势是什么

其实 iOS 原生的扫码器已经可以应对绝大多数的使用场景，但是针对特殊的使用场景时，iOS 原生的扫码器就有点力不从心了。

BinCodeScannerSDK 可以非常轻松的应对以下两大使用场景。

* 非常复杂的二维码
* 二维码表面反光比较严重（比如“劣质”屏幕上的二维码）

# 我能提供什么

BinCodeScannerSDK 已经为开发者提供了一个标准的扫码器控制器（BinCodeScannerViewController），类似于微信扫码器的交互方式，可以适用于绝大多数的使用场景。

BinCodeScannerSDK 还为开发者提供可自定义的扫码器（BinCodeScanner）。

BinCodeScannerSDK 支持相机扫码和相册扫码，还提供手电筒功能。

BinCodeScannerSDK 支持扫描条码。

# 你需要了解什么

BinCodeScannerSDK 需要你导入 libc++.tbd 和 libiconv.tbd。

BinCodeScannerSDK.a 仅支持64位的真机和模拟器，如果你需要支持32位，你可以终端执行以下命令生产新的 BinCodeScannerSDK.a

> lipo -create Release-iphoneos.a Debug-iphonesimulator.a -output BinCodeScannerSDK.a

Release-iphoneos.a 和 Debug-iphonesimulator.a 两个文件在 BinCodeScannerExample/BinCodeScannerSDK 目录下。

另：虽然库文件很大，但是对 .ipa 文件的体积影响不大。


