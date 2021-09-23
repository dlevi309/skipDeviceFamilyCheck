#include "MIDaemonConfiguration.h"

%hook MIDaemonConfiguration
-(BOOL)skipDeviceFamilyCheck { return YES; }
-(BOOL)skipThinningCheck { return YES; }
%end
