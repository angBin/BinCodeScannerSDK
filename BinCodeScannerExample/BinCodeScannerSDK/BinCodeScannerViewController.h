//
//  BinCodeScannerViewController.h
//  BinCodeScannerSDK
//
//  Created by angBin on 2019/1/14.
//  Copyright © 2019 angBin. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BinCodeScanner.h"

NS_ASSUME_NONNULL_BEGIN

@interface BinCodeScannerViewController : UIViewController

/**
 导航栏标题
 */
@property (nonatomic, copy) NSString *navigationControllerTitle;

/**
 扫描器对象
 */
@property (nonatomic, readonly) BinCodeScanner *codeScanner;

/**
 是否需要支持扫描相册中图片
 */
@property (nonatomic, assign) BOOL isSupportedPhotoAlbum;

/**
 是否需要支持开关手电筒
 */
@property (nonatomic, assign) BOOL isSupportedTorch;

@property (nonatomic, weak) id <BinCodeScannerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
