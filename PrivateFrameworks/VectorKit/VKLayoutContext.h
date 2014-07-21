//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VKAnchorContext, VKCamera, VKViewTransform;

__attribute__((visibility("hidden")))
@interface VKLayoutContext : NSObject
{
    VKCamera *_camera;
    VKCamera *_defaultTrackingCamera;
    id <MDRenderTarget> _canvas;
    BOOL _forceLayout;
    BOOL _iconsShouldAlignToPixels;
    float _styleZAdjust;
    BOOL _preloadOnly;
    VKCamera *_transitionCamera;
    long long _transitionMapMode;
    double _timestamp;
    struct VKEdgeInsets _labelEdgeInsets;
    int _styleZ;
    float _z;
    BOOL _hasOccluders;
    BOOL _hasMovingOccluders;
    VKViewTransform *_viewTransform;
    VKAnchorContext *_anchorContext;
    shared_ptr_78ff922b _unitMesh;
    shared_ptr_7c9fbd8a _unitTextureMesh;
    struct StencilManager _stencilManager;
    shared_ptr_807ec9ac _device;
    struct Loader _loader;
}

@property(nonatomic) struct VKEdgeInsets labelEdgeInsets; // @synthesize labelEdgeInsets=_labelEdgeInsets;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long transitionMapMode; // @synthesize transitionMapMode=_transitionMapMode;
@property(retain, nonatomic) VKCamera *transitionCamera; // @synthesize transitionCamera=_transitionCamera;
@property(retain, nonatomic) VKAnchorContext *anchorContext; // @synthesize anchorContext=_anchorContext;
@property(retain, nonatomic) VKViewTransform *viewTransform; // @synthesize viewTransform=_viewTransform;
@property(retain, nonatomic) VKCamera *defaultTrackingCamera; // @synthesize defaultTrackingCamera=_defaultTrackingCamera;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
@property(readonly, nonatomic) unsigned char stencilEnd;
@property(readonly, nonatomic) unsigned char stencilStart;
@property(readonly, nonatomic) BOOL hasOverlayInStencil;
- (void)markStencilAsDirty;
- (unsigned char)reserveStencilValues:(unsigned char)arg1 clearItem:(struct ClearItem **)arg2 fromTop:(BOOL)arg3;
- (unsigned char)reserveStencilValues:(unsigned char)arg1 clearItem:(struct ClearItem **)arg2;
- (void)startFrameWithTimeStamp:(double)arg1;
- (shared_ptr_7c9fbd8a)unitTextureMesh;
- (shared_ptr_78ff922b)unitMesh;
- (void)dealloc;
- (void)canvasDidChange;
- (id)initWithCanvas:(id)arg1 camera:(id)arg2 device:(const shared_ptr_807ec9ac *)arg3;
- (void)clearCanvas;
- (struct Loader *)loader;
- (shared_ptr_807ec9ac)device;

@end

