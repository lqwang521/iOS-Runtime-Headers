/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLWaveformImageProducer : NSObject {
    float  _powerBarSpacing;
    float  _powerBarWidth;
    NSMutableArray * _powerLevels;
    int  _waveformMode;
}

@property (nonatomic) float powerBarSpacing;
@property (nonatomic) float powerBarWidth;
@property (nonatomic, copy) NSArray *powerLevels;
@property (nonatomic) int waveformMode;

- (void).cxx_destruct;
- (id)_averagedPowerLevelsWithCount:(int)arg1;
- (void)appendPowerLevel:(float)arg1;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (float)powerBarSpacing;
- (float)powerBarWidth;
- (id)powerLevels;
- (void)setPowerBarSpacing:(float)arg1;
- (void)setPowerBarWidth:(float)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setWaveformMode:(int)arg1;
- (int)waveformMode;

@end
