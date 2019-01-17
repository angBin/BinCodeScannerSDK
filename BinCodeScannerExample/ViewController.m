//
//  ViewController.m
//  BinCodeScannerExample
//
//  Created by angBin on 2019/1/16.
//  Copyright © 2019 angBin. All rights reserved.
//

#import "ViewController.h"

#import "BinCodeScannerSDK/BinCodeScannerViewController.h"

@interface ViewController () <BinCodeScannerDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.title = @"BinCodeScannerExample";
}

- (BOOL)codeScannerGotRightResult:(NSString *)result {
    return NO;
}

- (void)codeScannerGotEmptyResult {
    NSLog(@"%s", __func__);
}

- (IBAction)navigation:(id)sender {
    BinCodeScannerViewController *VC = [[BinCodeScannerViewController alloc] init];
    VC.isSupportedPhotoAlbum = YES;
    VC.isSupportedTorch = YES;
    VC.delegate = self;
    [self.navigationController pushViewController:VC animated:YES];
}

- (IBAction)modal:(id)sender {
    BinCodeScannerViewController *VC = [[BinCodeScannerViewController alloc] init];
    VC.isSupportedPhotoAlbum = YES;
    VC.isSupportedTorch = YES;
    VC.delegate = self;
    [self presentViewController:VC animated:YES completion:nil];
}

@end
