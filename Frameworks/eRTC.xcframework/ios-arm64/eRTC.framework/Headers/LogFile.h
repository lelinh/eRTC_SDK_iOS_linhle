//
//  LogFile.h
//  eRTC
//
//  Created by Apple on 06/07/21.
//  Copyright © 2021 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LogFile : NSObject
+ (void)write:(NSString *)str;
+ (NSString *)getLogFilePath;
@end

NS_ASSUME_NONNULL_END
