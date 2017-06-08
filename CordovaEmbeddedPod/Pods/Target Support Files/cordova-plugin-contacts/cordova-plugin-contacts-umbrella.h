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

#import "CDVContact.h"
#import "CDVContacts.h"

FOUNDATION_EXPORT double cordova_plugin_contactsVersionNumber;
FOUNDATION_EXPORT const unsigned char cordova_plugin_contactsVersionString[];

