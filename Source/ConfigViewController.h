//
//  ConfigViewController.h
//  CouchDemo
//
//  Created by Jens Alfke on 8/8/11.
//  Copyright 2011 Couchbase, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CouchServer;

@interface ConfigViewController : UIViewController

@property (nonatomic, readonly) IBOutlet UITextField* urlField;
@property (nonatomic, readonly) IBOutlet UILabel* versionField;
@property (nonatomic, readonly) IBOutlet UISwitch* autoSyncSwitch;

- (IBAction) learnMore:(id)sender;
- (IBAction)done:(id)sender;

@end
