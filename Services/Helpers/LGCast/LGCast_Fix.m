//
//  LGCast_Fix.m
//  Pods
//
//  Created by MK on 2025/3/14.
//

#import "LGCast_Fix.h"

#if !LG_CAST_ENABLED

@implementation Log
+ (void)debugLGCast:(NSString *)message {}
+ (void)infoLGCast:(NSString *)message {}
+ (void)errorLGCast:(NSString *)message {}
@end

#endif
