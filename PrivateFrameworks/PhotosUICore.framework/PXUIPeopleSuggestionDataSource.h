/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIPeopleSuggestionDataSource : NSObject <PXPeopleSuggestionManagerDataSource> {
    NSArray * _cachedSuggestions;
}

@property (retain) NSArray *cachedSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedSuggestions;
- (void)commitSuggestionsForFaceCollection:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;
- (id)initWithInitialSuggestions:(id)arg1;
- (void)setCachedSuggestions:(id)arg1;
- (id)suggestionsForFaceCollection:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3;

@end
