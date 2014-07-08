//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OpenGLLayer.h"

@interface OpenGLTextureLayer : OpenGLLayer
{
    unsigned int _textureID;
    unsigned int _textureCapability;
    struct CGSize _textureSize;
    struct CGSize _bufferSize;
    unsigned int _pixelFormat;
    unsigned int _pixelType;
    unsigned int _internalFormat;
    BOOL _alphaIsPremultiplied;
    BOOL _textured;
    BOOL _mirrored;
    float _blackTint;
    BOOL _appWillTerminate;
}

- (void)handleApplicationWillTerminate:(id)arg1;
- (struct CGSize)bufferSize;
- (struct CGSize)textureSize;
- (void)compositeLayer:(struct _CGLContextObject *)arg1;
- (void)renderTexture:(struct _CGLContextObject *)arg1;
- (void)_retexture:(struct _CGLContextObject *)arg1;
- (void)_cleanupAfterRetexture:(void *)arg1;
- (CDStruct_8a8b3360)_textureLayerInfo;
- (void)updateBuffer;
- (void)setTextureID:(unsigned int)arg1;
- (BOOL)isMirrored;
- (void)setMirrored:(BOOL)arg1;
- (float)blackTint;
- (void)setOpacity:(float)arg1;
- (void)setBlackTint:(float)arg1;
- (void)_updateAlphaBlending;
- (unsigned int)textureID;
- (void)deleteTextureID;
- (void)generateTextureID;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 layerName:(id)arg2;

@end
