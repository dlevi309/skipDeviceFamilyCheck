GO_EASY_ON_ME=1

ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = skipDeviceFamilyCheck
skipDeviceFamilyCheck_FILES = Tweak.xm
skipDeviceFamilyCheck_FRAMEWORKS = CoreFoundation

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 backboardd"