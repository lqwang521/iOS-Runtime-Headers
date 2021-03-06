/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform {
    PXNonuniformTransform * _transform;
    UIView * _transformedView;
}

@property (nonatomic, readonly) PXNonuniformTransform *transform;
@property (nonatomic, readonly) UIView *transformedView;

- (void).cxx_destruct;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransformForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)initWithTransformedView:(id)arg1 transform:(id)arg2;
- (id)inverseTransform;
- (id)transform;
- (id)transformedView;

@end
