TARGET = iphone:clang:13.0

ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = skipDeviceFamilyCheck
skipDeviceFamilyCheck_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 backboardd"