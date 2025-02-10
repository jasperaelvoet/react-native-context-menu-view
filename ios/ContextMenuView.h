//
//  ContextMenu.h
//  reactnativeuimenu
//
//  Created by Matthew Iannucci on 10/6/19.
//  Copyright © 2019 Matthew Iannucci. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTComponent.h>
#import "ContextMenuAction.h"

@interface ContextMenuView : UIControl<UIContextMenuInteractionDelegate>

@property (nonnull, nonatomic, copy) NSString* title;
@property (nullable, nonatomic, copy) RCTBubblingEventBlock onPress;
@property (nullable, nonatomic, copy) RCTBubblingEventBlock onPreviewPress;
@property (nullable, nonatomic, copy) RCTBubblingEventBlock onCancel;
@property (nullable, nonatomic, copy) NSArray<ContextMenuAction*>* actions;
@property (nullable, nonatomic, copy) UIColor* previewBackgroundColor;
@property (nonatomic, assign) BOOL disabled;
@property (nonatomic, assign) CGFloat borderRadius;
@property (nonatomic, assign) CGFloat borderTopLeftRadius; 
@property (nonatomic, assign) CGFloat borderTopRightRadius;
@property (nonatomic, assign) CGFloat borderBottomRightRadius;
@property (nonatomic, assign) CGFloat borderBottomLeftRadius;
@property (nonatomic, assign) BOOL disableShadow;

@end
