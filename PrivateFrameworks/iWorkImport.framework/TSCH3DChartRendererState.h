/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer<TSCH3DGLLayer>, TSCH3DChartRenderCycle, TSCH3DChartRep, TSCH3DGLLayerDelegate, TSCH3DRenderProcessor, TSCH3DScene, TSCH3DSession, TSCH3DSharegroupToken;

@interface TSCH3DChartRendererState : NSObject <TSCHUnretainedParent> {
    CALayer<TSCH3DGLLayer> *mGLLayer;
    TSCH3DGLLayerDelegate *mGLLayerDelegate;
    BOOL mInteractive;
    BOOL mIsInteractiveMode;
    struct CGSize { 
        float width; 
        float height; 
    } mMinimumBufferSize;
    TSCH3DRenderProcessor *mProcessor;
    TSCH3DChartRenderCycle *mRenderCycle;
    TSCH3DChartRep *mRep;
    TSCH3DSession *mSession;
    TSCH3DSharegroupToken *mSharegroupToken;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mVisibleBoundsInLayerRelativeSpace;
    BOOL mWantInteractiveMode;
}

@property(readonly) BOOL canRender;
@property(readonly) BOOL framebufferCanRender;
@property(readonly) BOOL hasSession;
@property(readonly) BOOL mustRecreateRenderCycleForCurrentRenderCycleClass;
@property int performance;
@property(readonly) TSCH3DRenderProcessor * processor;
@property(readonly) TSCH3DChartRenderCycle * renderCycle;
@property(readonly) TSCH3DScene * scene;
@property(readonly) TSCH3DSession * session;
@property(readonly) TSCH3DSharegroupToken * sharegroupToken;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleBoundsInLayerRelativeSpace;

- (id).cxx_construct;
- (id)GLLayer;
- (void)beginInteractiveModeWithMinimumBufferSize:(struct CGSize { float x1; float x2; })arg1 performanceHint:(int)arg2;
- (BOOL)canRender;
- (void)clearParent;
- (void)dealloc;
- (void)destroy;
- (void)destroyFramebuffer;
- (void)endInteractiveMode;
- (BOOL)framebufferCanRender;
- (BOOL)hasSession;
- (id)initWithRep:(id)arg1 sharegroupToken:(id)arg2;
- (BOOL)isOneShot;
- (BOOL)mustRecreateRenderCycleForCurrentRenderCycleClass;
- (void)p_createGLLayer;
- (BOOL)p_reusableForCurrentRenderCycleClass;
- (void)p_setupInteractiveMode;
- (void)p_setupRenderCycle;
- (void)p_setupSession;
- (void)p_updateLabelBitmapContextInfoForScene:(id)arg1;
- (void)p_validateLabelBitmapContextInfoForScene:(id)arg1;
- (int)performance;
- (id)processor;
- (void)recreateGLLayer;
- (void)releaseGLLayer;
- (id)renderCycle;
- (BOOL)renderLegendIntoSeparateLayer;
- (id)scene;
- (id)session;
- (void)setIfIsMoreDemandingPerformance:(int)arg1;
- (void)setPerformance:(int)arg1;
- (void)setVisibleBoundsInLayerRelativeSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setupForRendering;
- (id)sharegroupToken;
- (BOOL)usesMultipassRendering;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBoundsInLayerRelativeSpace;

@end