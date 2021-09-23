@interface MIGlobalConfiguration : NSObject {}
@end

@interface MIDaemonConfiguration : MIGlobalConfiguration {}
@property (nonatomic,readonly) BOOL skipDeviceFamilyCheck; 
@property (nonatomic,readonly) BOOL skipThinningCheck; 
@property (nonatomic,readonly) BOOL allowPatchWithoutSinf; 
@property (nonatomic,readonly) BOOL codeSigningEnforcementIsDisabled; 
@property (nonatomic,readonly) BOOL isInternalImageType;
-(BOOL)isInternalImageType;
-(BOOL)codeSigningEnforcementIsDisabled;
-(BOOL)skipDeviceFamilyCheck;
-(BOOL)skipThinningCheck;
-(BOOL)allowPatchWithoutSinf;
@end