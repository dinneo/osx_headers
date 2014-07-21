//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "SCNSceneRenderer.h"
#import "SCNTechniqueSupport.h"

@class NSColor, NSOpenGLContext, NSOpenGLPixelFormat, NSRecursiveLock, NSString, SCNDisplayLink, SCNEventHandler, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene;

@interface SCNView : NSView <SCNSceneRenderer, SCNTechniqueSupport>
{
    id _reserved;
    double _currentSystemTime;
    NSOpenGLPixelFormat *_userDefinedPixelFormat;
    unsigned int _updatingSurface:1;
    NSString *__ibSceneName;
    unsigned int _ibNoMultisampling:1;
    unsigned int _allowsBrowsing:1;
    unsigned int _isOpaque:1;
    unsigned int _firstDrawDone:1;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *__displayLink;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    NSColor *_backgroundColor;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    SCNEventHandler *_eventHandler;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
}

+ (id)_defaultPixelFormat;
+ (id)_defaultPixelFormatWithSampleCount:(unsigned long long)arg1 stencil:(BOOL)arg2;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
+ (id)SCNJSExportProtocol;
- (void)_jitterRedisplayInBackingLayerWithCGLContext:(struct _CGLContextObject *)arg1;
- (void)_cancelJitterRedisplay;
- (id)contentLayer;
- (void)rotateOf:(double)arg1;
- (double)zoomFactor;
- (void)setZoomFactor:(double)arg1;
- (BOOL)autoAdjustCamera;
- (void)setAutoAdjustCamera:(BOOL)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)windowChangedScreen:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (int)_displayLinkCallback:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawInBackingLayerWithCGLContext:(struct _CGLContextObject *)arg1 atTime:(double)arg2;
- (id)makeBackingLayer;
- (void)setWantsLayer:(BOOL)arg1;
- (id)_pixelFormatByDefaultingIfNeeded;
@property(retain, nonatomic) NSOpenGLPixelFormat *pixelFormat;
@property(retain, nonatomic) NSOpenGLContext *openGLContext;
- (id)_openGLContextIfAny;
- (id)_privateOpenGLContext;
- (id)_privateOpenGLContextIfAny;
- (void)_openGLContextDidChange:(id)arg1;
- (void)_clearAppKitGLContext;
- (void)_viewGlobalFrameDidChange:(id)arg1;
- (void)update;
- (void)reshape;
- (BOOL)lockFocusIfCanDraw;
- (id)_scnlayerBackedOpenGLContext;
- (void)setAsynchronousLoading:(BOOL)arg1;
- (void)setAllowsBrowsing:(BOOL)arg1;
- (void)set_ibWantsMultisampling:(BOOL)arg1;
- (BOOL)_ibWantsMultisampling;
- (void)set_ibSceneName:(id)arg1;
- (id)_ibSceneName;
@property(nonatomic) unsigned long long antialiasingMode;
- (id)_authoringEnvironment;
- (void)_cancelMouseMovedTracking;
- (void)_beginMouseMovedTracking;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
@property(readonly, copy) NSString *description;
- (void *)__CFObject;
- (void)unlock;
- (void)lock;
- (struct NSImage *)snapshot;
@property(nonatomic) BOOL showsStatistics;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_setNeedsDisplay;
- (id)_displayLink;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *context;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(nonatomic) double sceneTime;
@property(nonatomic) double currentTime;
- (BOOL)isOpaque;
@property(copy, nonatomic) NSColor *backgroundColor;
- (void)eventHandlerWantsRedraw;
- (void)setEventHandler:(id)arg1;
- (id)eventHandler;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(getter=isPlaying) BOOL playing;
@property(nonatomic) BOOL loops;
@property(nonatomic) BOOL allowsCameraControl;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)setPointOfView:(id)arg1 animate:(BOOL)arg2;
- (void)_drawAtTime:(double)arg1 WithContext:(struct _CGLContextObject *)arg2;
- (BOOL)_canJitter;
- (BOOL)_supportsJiterringSyncRedraw;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject *)arg1;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
- (id)renderer;
@property(retain, nonatomic) SCNScene *scene;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

