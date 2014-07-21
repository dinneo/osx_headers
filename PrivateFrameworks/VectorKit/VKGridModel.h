//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "VKMapLayer.h"
#import "VKStyleManagerObserver.h"

@class NSString, VKMapModel, VKStyleManager;

__attribute__((visibility("hidden")))
@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver>
{
    VKMapModel *_mapModel;
    BOOL _simpleGridEnabled;
    unsigned char _renderPass;
    double _gridMix;
    Matrix_5173352a _fillColor;
    Matrix_5173352a _lineColor;
    shared_ptr_1fee3c91 _viewUniformData;
    struct shared_ptr<ggl::GridBase::GridBaseUniformData> _baseUniformData;
    struct shared_ptr<ggl::SimpleGrid::SimpleGridUniformData> _simpleUniformData;
    struct shared_ptr<ggl::Grid::GridUniformData> _uniformData;
    struct unique_ptr<ggl::Grid::Shader::Setup, std::__1::default_delete<ggl::Grid::Shader::Setup>> _shaderSetup;
    struct unique_ptr<ggl::SimpleGrid::Shader::Setup, std::__1::default_delete<ggl::SimpleGrid::Shader::Setup>> _simpleShaderSetup;
    struct shared_ptr<ggl::GridBase::GridMesh> _gridMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _gridRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _simpleGridRenderState;
    struct RenderItem *_gridRenderItem;
    struct RenderItem *_simpleGridRenderItem;
    BOOL _needsUpdatedColor;
}

+ (BOOL)reloadOnStylesheetChange;
@property(nonatomic) unsigned char renderPass; // @synthesize renderPass=_renderPass;
@property(readonly, nonatomic) Matrix_5173352a fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;
@property(nonatomic) BOOL simpleGridEnabled; // @synthesize simpleGridEnabled=_simpleGridEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)dealloc;
- (id)init;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)updateGridColor;
- (void)setNeedsUpdatedGridColor;
@property(readonly, nonatomic) VKStyleManager *styleManager;
- (unsigned long long)mapLayerPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

