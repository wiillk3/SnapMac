//
//  SMSettings.h
//  SnapMac
//
//  Created by Fathy B on 07/04/2014.
//  Copyright (c) 2014 Fathy B. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMAndroidSync.h"
#import "SnapJS.h"

@interface SMSettings : NSObject {
    NSPanel *settingsWindow;
    __weak NSTextField *authTokenField;
    __weak NSTextField *userField;
}


@property NSWindow* window;

-(SMSettings*)initForWindow:(NSWindow*)window;
+(void)addOnloadBlock:(SMCallback)onloadBlock;
+(SMSettings*)sharedInstance;
-(void)show;
-(void)setObject:(id)object forKey:(NSString*)key;
-(id)objectForKey:(NSString*)key;

@property (nonatomic) SnapJS* snapJs;
@property (strong) IBOutlet NSPanel *settingsWindow;
@property (weak) IBOutlet NSPopUpButton *themeBtn;
@property (weak) IBOutlet NSTextField *themeTxt;
@property (weak) IBOutlet NSButton *checkbox3D;

@end
