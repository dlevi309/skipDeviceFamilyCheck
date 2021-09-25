@interface MIGlobalConfiguration : NSObject

@end

@interface MIDaemonConfiguration : MIGlobalConfiguration

@property (nonatomic, readonly) BOOL skipDeviceFamilyCheck; 
@property (nonatomic, readonly) BOOL skipThinningCheck; 
@property (nonatomic, readonly) BOOL allowPatchWithoutSinf; 

@end