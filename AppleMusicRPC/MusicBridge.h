//
//  MusicBridge.h
//  AppleMusicRPC
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MusicBridge : NSObject
- (NSDictionary<NSString *, NSObject *> *)currentTrackInfo;
- (BOOL)isPaused;
- (double)playerPosition;
@end

NS_ASSUME_NONNULL_END
