//
//  BinCodeScanner.h
//  BinCodeScannerSDK
//
//  Created by angBin on 2019/1/14.
//  Copyright © 2019 angBin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>

#define CODESCANNER_BOX_MARGIN_LEFTANDRIGHT   (0.17) // 0.17 * previewLayer's width
#define CODESCANNER_BOX_MARGIN_TOP            (0.4)  // 0.4 * (previewLayer's height - codeScannerBox's width)

NS_ASSUME_NONNULL_BEGIN

@protocol BinCodeScannerDelegate <NSObject>

@optional

/**
 扫描器获取到扫描结果

 @param result 扫描结果
 @return 是否为正确的结果
 */
- (BOOL)codeScannerGotRightResult:(NSString *)result;

/**
 扫描器获取到空的结果（调用scanImage方法后，没有扫描到信息）
 */
- (void)codeScannerGotEmptyResult;

@end

@interface BinCodeScanner : NSObject

/**
 用于手电筒相关开发
 */
@property (nonatomic, readonly) AVCaptureDevice *videoDevice;

/**
 扫描框颜色（默认是绿色）
 */
@property (nonatomic, copy) UIColor *codeScannerBoxColor;

@property (nonatomic, weak) id <BinCodeScannerDelegate> delegate;

/**
 初始化扫描器（初始化的BinCodeScanner对象需要被强引用，否则会释放掉）

 @param previewLayer 预览层（预览层需要先设置frame，后续更改无效；如果传空，则只可以扫描图片）
 @return 扫描器
 */
- (instancetype)initWithPreviewLayer:(nullable CALayer *)previewLayer;

/**
 开始相机扫描
 */
- (void)startRunning;

/**
 停止相机扫描
 */
- (void)stopRunning;

/**
 图片扫描（扫描结果通过代理回调）

 @param image 需要扫描的图片
 */
- (void)scanImage:(nonnull UIImage *)image;

/**
 移除预览层（如果移除预览层，BinCodeScanner对象将不再支持相机扫描）
 */
- (void)removePreviewLayer;

@end

NS_ASSUME_NONNULL_END
