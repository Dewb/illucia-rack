SHELL:=/bin/bash -O extglob
RACK_DIR ?= ../..

FLAGS += \
	-Isrc \

CFLAGS +=
CXXFLAGS += 
LDFLAGS +=

SOURCES += \
	$(wildcard src/*.cpp) \

include $(RACK_DIR)/arch.mk

ifeq ($(ARCH), win)
	#SOURCES += $(wildcard lib/oscpack/ip/win32/*.cpp) 
	#LDFLAGS += -lws2_32 -lwinmm
else
	#SOURCES += $(wildcard lib/oscpack/ip/posix/*.cpp) 
endif

DISTRIBUTABLES += $(wildcard LICENSE*) res 

include $(RACK_DIR)/plugin.mk
