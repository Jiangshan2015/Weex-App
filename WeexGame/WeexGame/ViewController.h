//
//  ViewController.h
//  WeexGame
//
//  Created by songge on 17/1/11.
//  Copyright © 2017年 songge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SRWebSocket.h>
@interface ViewController : UIViewController<SRWebSocketDelegate>
@property (nonatomic, strong) NSString *script;
@property (nonatomic, strong) NSURL *url;

@property (nonatomic, strong) SRWebSocket *hotReloadSocket;
@property (nonatomic, strong) NSString *source;


@end

