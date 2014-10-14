//
//  FPPickerController.h
//  FPPicker
//
//  Created by Ruben Nine on 18/08/14.
//  Copyright (c) 2014 Filepicker.io. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FPExternalHeaders.h"

@interface FPPickerController : NSWindowController

@property (nonatomic, weak) id<FPPickerDelegate> delegate;

@property (nonatomic, strong) NSArray *sourceNames;
@property (nonatomic, strong) NSArray *dataTypes;

@property (nonatomic, assign) NSInteger maxFiles;

@property (nonatomic, assign) BOOL shouldUpload;
@property (nonatomic, assign) BOOL shouldDownload;

- (void)open;

@end
