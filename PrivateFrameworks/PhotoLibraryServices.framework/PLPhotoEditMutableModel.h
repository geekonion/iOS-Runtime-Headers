/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSString, _UIDynamicValueAnimation;

@interface PLPhotoEditMutableModel : PLPhotoEditModel {
    _UIDynamicValueAnimation *_currentCopyAnimation;
    int _transactionDepth;
}

@property(copy) NSArray * autoRedEyeCorrections;
@property(copy) NSString * autoSmartColorIdentifier;
@property float autoSmartColorLevel;
@property(copy) NSString * autoSmartToneIdentifier;
@property float autoSmartToneLevel;
@property(copy) NSString * autoWhiteBalanceIdentifier;
@property(copy) NSDictionary * autoWhiteBalanceSettings;
@property float blackPointLevelOffset;
@property float brightnessLevelOffset;
@property float bwGrainLevelOffset;
@property float bwHueLevelOffset;
@property float bwNeutralGammaLevelOffset;
@property float bwStrengthLevelOffset;
@property float bwToneLevelOffset;
@property float colorCastLevelOffset;
@property float colorContrastLevelOffset;
@property float colorVibrancyLevelOffset;
@property float contrastLevelOffset;
@property(copy) NSString * effectFilterName;
@property int effectFilterVersion;
@property float exposureLevelOffset;
@property float highlightsLevelOffset;
@property(copy) NSArray * legacyAutoEnhanceFilters;
@property BOOL legacyAutoEnhanceIsOn;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } normalizedCropRect;
@property(copy) NSArray * redEyeCorrections;
@property unsigned int rotation;
@property float shadowsLevelOffset;
@property(getter=isSmartBWEnabled) BOOL smartBWEnabled;
@property float smartBWLevel;
@property(copy) NSDictionary * smartBWStatistics;
@property(getter=isSmartColorEnabled) BOOL smartColorEnabled;
@property float smartColorLevel;
@property(copy) NSDictionary * smartColorStatistics;
@property(getter=isSmartToneEnabled) BOOL smartToneEnabled;
@property float smartToneLevel;
@property(copy) NSDictionary * smartToneStatistics;
@property float straightenAngle;
@property(getter=isWhiteBalanceEnabled) BOOL whiteBalanceEnabled;
@property float whiteBalanceFaceI;
@property float whiteBalanceFaceQ;
@property float whiteBalanceFaceStrength;
@property float whiteBalanceFaceWarmth;

- (id)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(float*)arg1 toValue:(float)arg2;
- (void)addRedEyeCorrections:(id)arg1;
- (void)copyValuesFromModel:(id)arg1 animated:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)performChangesWithBlock:(id)arg1;
- (void)removeRedEyeCorrections:(id)arg1;
- (void)setAutoRedEyeCorrections:(id)arg1;
- (void)setAutoSmartColorIdentifier:(id)arg1;
- (void)setAutoSmartColorLevel:(float)arg1;
- (void)setAutoSmartToneIdentifier:(id)arg1;
- (void)setAutoSmartToneLevel:(float)arg1;
- (void)setAutoWhiteBalanceIdentifier:(id)arg1;
- (void)setAutoWhiteBalanceSettings:(id)arg1;
- (void)setBlackPointLevelOffset:(float)arg1;
- (void)setBrightnessLevelOffset:(float)arg1;
- (void)setBwGrainLevelOffset:(float)arg1;
- (void)setBwHueLevelOffset:(float)arg1;
- (void)setBwNeutralGammaLevelOffset:(float)arg1;
- (void)setBwStrengthLevelOffset:(float)arg1;
- (void)setBwToneLevelOffset:(float)arg1;
- (void)setColorCastLevelOffset:(float)arg1;
- (void)setColorContrastLevelOffset:(float)arg1;
- (void)setColorVibrancyLevelOffset:(float)arg1;
- (void)setContrastLevelOffset:(float)arg1;
- (void)setCropConstraintWidth:(int)arg1 height:(int)arg2;
- (void)setEffectFilterName:(id)arg1;
- (void)setEffectFilterVersion:(int)arg1;
- (void)setExposureLevelOffset:(float)arg1;
- (void)setHighlightsLevelOffset:(float)arg1;
- (void)setLegacyAutoEnhanceFilters:(id)arg1;
- (void)setLegacyAutoEnhanceIsOn:(BOOL)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRedEyeCorrections:(id)arg1;
- (void)setRotation:(unsigned int)arg1;
- (void)setShadowsLevelOffset:(float)arg1;
- (void)setSmartBWEnabled:(BOOL)arg1;
- (void)setSmartBWLevel:(float)arg1;
- (void)setSmartBWStatistics:(id)arg1;
- (void)setSmartColorEnabled:(BOOL)arg1;
- (void)setSmartColorLevel:(float)arg1;
- (void)setSmartColorStatistics:(id)arg1;
- (void)setSmartToneEnabled:(BOOL)arg1;
- (void)setSmartToneLevel:(float)arg1;
- (void)setSmartToneStatistics:(id)arg1;
- (void)setStraightenAngle:(float)arg1;
- (void)setWhiteBalanceEnabled:(BOOL)arg1;
- (void)setWhiteBalanceFaceI:(float)arg1;
- (void)setWhiteBalanceFaceQ:(float)arg1;
- (void)setWhiteBalanceFaceStrength:(float)arg1;
- (void)setWhiteBalanceFaceWarmth:(float)arg1;

@end