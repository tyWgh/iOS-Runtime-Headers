/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSNumber, NSString;

@interface AVAudioDevice : NSObject {
    NSNumber *_deviceID;
    NSString *_deviceName;
    BOOL _inputAvailable;
    BOOL _isLineIn;
    BOOL _outputAvailable;
}

@property(readonly) NSNumber * deviceID;
@property(readonly) NSString * deviceName;
@property(readonly) BOOL inputAvailable;
@property(readonly) BOOL outputAvailable;

- (void)createName;
- (void)createNameForScope:(unsigned long)arg1;
- (void)dealloc;
- (id)deviceID;
- (id)deviceName;
- (id)initWithDeviceID:(id)arg1;
- (BOOL)inputAvailable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSomethingConnectedToJack;
- (BOOL)isStreamAvailableForScope:(unsigned long)arg1;
- (BOOL)isValidDevice;
- (BOOL)isValidInputDevice;
- (BOOL)outputAvailable;

@end
