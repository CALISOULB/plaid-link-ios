//
//  ViewController.h
//  LinkDemo-ObjC
//
//  Copyright © 2019 Plaid Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (readonly) NSURL* oauthRedirectUri;
@property (readonly) NSString* oauthNonce;

@end

