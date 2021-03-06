#import <ReactABI22_0_0/ABI22_0_0RCTBridge.h>
#import "ABI22_0_0EXScopedEventEmitter.h"

@protocol ABI22_0_0EXMagnetometerScopedModuleDelegate

- (void)sensorModuleDidSubscribeForMagnetometerUpdatesOfExperience:(NSString *)experienceId withHandler:(void (^)(NSDictionary *event))handlerBlock;
- (void)sensorModuleDidUnsubscribeForMagnetometerUpdatesOfExperience:(NSString *)experienceId;
- (void)setMagnetometerUpdateInterval:(NSTimeInterval)intervalMs;

@end

@interface ABI22_0_0EXMagnetometer : ABI22_0_0EXScopedEventEmitter

@end
