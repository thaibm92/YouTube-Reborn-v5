#import <Foundation/Foundation.h>

extern NSBundle *YouTubeRebornBundle();

static inline NSString *LOC(NSString *key) {
    NSBundle *tweakBundle = YouTubeRebornBundle();
    return [tweakBundle localizedStringForKey:key value:nil table:nil];
}
