/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsObject : NSObject {
    id  _baseObject;
    struct ILayerLockingPolicy { int (**x1)(); } * _lockingPolicy;
    MTLToolsObject * _parent;
    MTLToolsObject * _strongParent;
}

@property (nonatomic, retain) id baseObject;
@property (nonatomic) struct ILayerLockingPolicy { int (**x1)(); }*lockingPolicy;

+ (id)dispatchQueue;
+ (void)visitObjects:(id)arg1 withVisitor:(id)arg2;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)baseObject;
- (id)baseObjectWithClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 lockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg3;
- (id)initWithBaseObject:(id)arg1 strongParent:(id)arg2;
- (struct ILayerLockingPolicy { int (**x1)(); }*)lockingPolicy;
- (id)originalObject;
- (id)parent;
- (void)setBaseObject:(id)arg1;
- (void)setLockingPolicy:(struct ILayerLockingPolicy { int (**x1)(); }*)arg1;
- (void)setOriginalObject:(id)arg1;
- (id)strongParent;

@end
