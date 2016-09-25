/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotoAnalysisFileCache : NSObject {
    NSMutableDictionary * _cache;
    BOOL  _cacheDirty;
    int  _sequenceNumber;
    NTKTaskScheduler * _taskScheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dirtyCache;
- (BOOL)_load;
- (BOOL)_save;
- (void)dealloc;
- (id)init;
- (id)photoAnalysisForIdentifier:(id)arg1;
- (void)setPhotoAnalysis:(id)arg1 forIdentifier:(id)arg2;

@end