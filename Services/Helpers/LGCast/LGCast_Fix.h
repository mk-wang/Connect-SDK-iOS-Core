//
//  LGCast_Fix.h
//  Pods
//
//  Created by MK on 2025/3/14.
//

#ifndef LGCast_Fix

#define LGCast_Fix

#if TARGET_OS_SIMULATOR

#define LG_CAST_ENABLED 0

@class LGCastCameraResolutionInfo;
@class LGCastSecurityKey;

@interface Log : NSObject

+ (void)debugLGCast:(NSString *)message;
+ (void)infoLGCast:(NSString *)message;
+ (void)errorLGCast:(NSString *)message;

@end

#else

#define LG_CAST_ENABLED 1

#import <LGCast/LGCast-Swift.h>

#endif

#endif 
