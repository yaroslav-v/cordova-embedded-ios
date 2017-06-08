#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CDVFileTransfer.h"

FOUNDATION_EXPORT double cordova_plugin_file_transferVersionNumber;
FOUNDATION_EXPORT const unsigned char cordova_plugin_file_transferVersionString[];

