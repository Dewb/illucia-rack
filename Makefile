SHELL:=/bin/bash -O extglob
RACK_DIR ?= ../..

FLAGS += \
	-Isrc \
	-Ilib/serial/include \
	-Ilib/fsmlite

CFLAGS += -g
CXXFLAGS += -g
LDFLAGS += 

SOURCES += \
	$(wildcard src/*.cpp) \
	lib/serial/src/serial.cc 

include $(RACK_DIR)/arch.mk

ifdef ARCH_LIN
	SOURCES += \
		lib/serial/src/impl/unix.cc \
		lib/serial/src/impl/list_ports/list_ports_linux.cc
endif

ifdef ARCH_MAC
	SOURCES += \
		lib/serial/src/impl/unix.cc \
		lib/serial/src/impl/list_ports/list_ports_osx.cc
endif

ifdef ARCH_WIN
	SOURCES += \
		lib/serial/src/impl/win.cc \
		lib/serial/src/impl/list_ports/list_ports_win.cc
	LDFLAGS += -lsetupapi
endif

DISTRIBUTABLES += $(wildcard LICENSE*) res 

debug_install: all
	rm -rf dist
	mkdir -p dist/"$(SLUG)"
	cp $(TARGET) dist/"$(SLUG)"/
ifdef ARCH_MAC
	rsync -rR $(DISTRIBUTABLES) dist/"$(SLUG)"/
else
	cp -r --parents $(DISTRIBUTABLES) dist/"$(SLUG)"/
endif
	cd dist && zip -q -9 -r "$(SLUG)"-"$(VERSION)"-$(ARCH).zip "$(SLUG)"
	cp dist/"$(SLUG)"-"$(VERSION)"-$(ARCH).zip $(RACK_USER_DIR)/plugins-v1/

include $(RACK_DIR)/plugin.mk
