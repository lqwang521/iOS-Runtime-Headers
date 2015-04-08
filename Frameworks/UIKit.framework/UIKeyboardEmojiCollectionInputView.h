/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSIndexPath, NSString, UICollectionViewFlowLayout, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder<UIKBEmojiHitTestResponder>;

@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiCategoryControl, UIKeyboardEmojiInput> {
    int _category;
    UIKeyboardEmojiCollectionView *_collectionView;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    int _currentSection;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UICollectionViewFlowLayout *_flowLayout;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
    BOOL _isDraggingInputView;
    NSIndexPath *_tappedSkinToneEmoji;
}

@property int category;
@property(copy) id completionBlock;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property UIResponder<UIKBEmojiHitTestResponder> * hitTestResponder;
@property(readonly) BOOL isDraggingInputView;
@property(readonly) Class superclass;
@property NSIndexPath * tappedSkinToneEmoji;

- (void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1;
- (BOOL)_userHasSelectedSkinToneEmoji;
- (int)category;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)completionBlock;
- (void)dealloc;
- (int)didInputSubTree:(id)arg1;
- (void)didMoveToWindow;
- (id)emojiBaseUnicodeString:(id)arg1;
- (id)hitTestResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)isDraggingInputView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadForCategory:(int)arg1;
- (int)reloadSectionForOffsetPercentage:(float)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (void)setCategory:(int)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setHitTestResponder:(id)arg1;
- (void)setTappedSkinToneEmoji:(id)arg1;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (BOOL)skinToneWasUsedForEmoji:(id)arg1;
- (float)snappedXOffsetForOffset:(float)arg1;
- (id)subTreeHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)tappedSkinToneEmoji;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(id)arg3;

@end