/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSSet, TSCH3DGLContext, TSCH3DGLVersion;

@interface TSCH3DGLContext : TSCH3DContext <TSCHUnretainedParent> {
    struct RenderState { 
        boolmBlend; 
        int blendMode; 
        booldepthTest; 
        booldepthMask; 
        boolculling; 
        boolcullBack; 
        boolpolygonOffset; 
        float polygonOffsetFactor; 
        float polygonOffsetUnits; 
        struct EnableClipDistances { 
            struct array<signed char, 8> { 
                BOOL __elems_[8]; 
            } states; 
        } enableClipDistances; 
    struct BufferStates { 
        struct array<TSCH3D::GLSingleState, 2> { 
            struct GLSingleState { 
                unsigned int target; 
                struct UpdatableValue<unsigned int> { 
                    unsigned int value; 
                } handle; 
            } __elems_[2]; 
        } states; 
    struct GLSingleState { 
        unsigned int target; 
        struct UpdatableValue<unsigned int> { 
            unsigned int value; 
        } handle; 
    struct TextureUnitStates { 
        struct UpdatableValue<unsigned int> { 
            unsigned int value; 
        } activeTexture; 
        struct array<TSCH3D::GLSingleState, 4> { 
            struct GLSingleState { 
                unsigned int target; 
                struct UpdatableValue<unsigned int> { 
                    unsigned int value; 
                } handle; 
            } __elems_[4]; 
        } states; 
    struct box<glm::detail::tvec2<int> > { 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } mMin; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } mMax; 
    } mBufferArraysStates;
    } mBufferStates;
    NSMutableIndexSet *mChangeMask;
    NSMutableSet *mChildrenContexts;
    NSIndexSet *mEnabledArrays;
    NSMutableDictionary *mExtensionsNamesDict;
    BOOL mIsSharable;
    TSCH3DGLContext *mSharedContext;
    } mState;
    } mTextureUnitStates;
    TSCH3DGLVersion *mVersion;
    } mViewport;
    NSMutableDictionary *mVirtualScreenToCapabilitiesMap;
}

@property(readonly) NSSet * childrenContexts;
@property(readonly) BOOL isSharable;
@property(readonly) TSCH3DGLVersion * version;

- (id).cxx_construct;
- (void)activateTextureUnit:(unsigned int)arg1;
- (void)addChangeFlag:(int)arg1;
- (void)addShaderChangeFlag;
- (void)bindTextureHandleValue:(unsigned int)arg1 is3DTexture:(BOOL)arg2;
- (struct GLSingleState { unsigned int x1; struct UpdatableValue<unsigned int> { unsigned int x_2_1_1; } x2; }*)bufferArraysStates;
- (struct BufferStates { struct array<TSCH3D::GLSingleState, 2> { struct GLSingleState { unsigned int x_1_2_1; struct UpdatableValue<unsigned int> { unsigned int x_2_3_1; } x_1_2_2; } x_1_1_1[2]; } x1; }*)bufferStates;
- (id)capabilitiesForExtensions:(id)arg1;
- (id)childrenContexts;
- (void)clearParent;
- (void)dealloc;
- (id)description;
- (void)enableSharing;
- (void)enableVertexArrays:(id)arg1;
- (BOOL)hasChangeFlag:(int)arg1;
- (id)init;
- (id)initWithSharedContext:(id)arg1;
- (void)invalidateTextureHandleValue:(unsigned int)arg1;
- (BOOL)isSharable;
- (void)p_addChildContext:(id)arg1;
- (void)p_cacheCapabilitiesForKey:(id)arg1;
- (id)p_keyForScreen:(int)arg1;
- (void)p_removeChildContext:(id)arg1;
- (void)removeChangeFlag:(int)arg1;
- (void)setEnabledVertexArrays:(id)arg1;
- (void)setState:(const struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; }*)arg1;
- (id)sharedContext;
- (id)sharedID;
- (struct RenderState { boolx1; int x2; boolx3; boolx4; boolx5; boolx6; boolx7; float x8; float x9; struct EnableClipDistances { struct array<signed char, 8> { BOOL x_1_2_1[8]; } x_10_1_1; } x10; })state;
- (BOOL)supportsCapability:(id)arg1;
- (id)version;
- (void)viewport:(struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_1_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_1_1_2; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; }*)arg1;

@end