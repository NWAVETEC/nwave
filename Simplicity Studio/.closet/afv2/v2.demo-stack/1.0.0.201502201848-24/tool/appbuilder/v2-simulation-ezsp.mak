# This Makefile defines how to build a simulated host application connected to a
# simulated Ember NCP EZSP SPI device.  

# Remove all built-in rules.
# All we need is contained within this file.
.SUFFIXES:

# Variables
ifdef E_CC
  CC := $(E_CC)
else
  CC := gcc
endif

# LD is set to CC so that we can properly pull in the necessary object
# files that contain the code that runs prior to main() and is a standard part of
# a GNU C executable.
LD := $(CC)
SHELL := /bin/sh

# matchStackBase.mak finds the right base and sets GLOBAL_BASE_DIR.
include matchStackBase.mak
ifeq ($(origin GLOBAL_BASE_DIR), undefined)
  $(error ERROR: GLOBAL_BASE_DIR is not defined, I can not build, sorry.)
endif

APP_BUILDER_OUTPUT_DIRECTORY=app/builder/_replace_projectName_
APP_CALLBACK_FILE_DIRECTORY=$(APP_BUILDER_OUTPUT_DIRECTORY)
APP_BUILDER_CONFIG_HEADER=$(APP_BUILDER_OUTPUT_DIRECTORY)/_replace_projectName_.h
APP_BUILDER_STORAGE_FILE=$(APP_BUILDER_OUTPUT_DIRECTORY)/_replace_projectName__endpoint_config.h

# Global defines allows the user to add #defines across all files
# All files will be compiled this way and the output directory
# will reflect these additional parameters as well.
# They can be specified on the command-line as follows:
#   make -f Foo.mak GLOBAL_DEFINES=EMBER_TEST
#   make -f Foo.mak GLOBAL_DEFINES="EMBER_TEST SOME_OTHER_DEFINE"
ifdef GLOBAL_DEFINES
  OUTPUT_DIR_GLOBAL_DEFINES_PATH=-$(shell echo $(GLOBAL_DEFINES) | sed -e 's/ /\-/g')
  COMPILER_GLOBAL_DEFINES=-D$(shell echo $(GLOBAL_DEFINES) | sed -e 's/ / \-D/g')
endif

INCLUDES= \
  -I. \
  -I$(APP_BUILDER_OUTPUT_DIRECTORY) \
  -I./app/framework/cli \
  -I./app/framework/include \
_replace_includeDirectoriesMak_ \
_replace_includePathsMak_ \
  -I./app/framework/security \
  -I./app/framework/util \
  -I./app/util \
  -I./app/util/common \
  -I./app/util/serial \
  -I./app/util/zigbee-framework \
  -I$(GLOBAL_BASE_DIR_HAL) \
  -I$(GLOBAL_BASE_DIR_HAL)/hal \
  -I$(GLOBAL_BASE_DIR_HAL)/hal/micro/generic \
  -I$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/host/generic \
  -I$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation \
  -I./stack \
  -I./tool/simulator/child

DEFINES= \
  -DPHY_EM250 \
  -DUNIX \
  -DPHY_NULL \
  -DBOARD_HOST \
  -DEMBER_TEST \
  -DAF_SPI_HOST \
  -DEZSP_HOST \
  -DCONFIGURATION_HEADER=\"app/framework/util/config.h\" \
  -DZA_GENERATED_HEADER=\"$(APP_BUILDER_CONFIG_HEADER)\" \
  -DATTRIBUTE_STORAGE_CONFIGURATION=\"$(APP_BUILDER_STORAGE_FILE)\" \
  -DPLATFORM_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/compiler/gcc.h\" \
  -DBOARD_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/board/simulation.h\" \
  -DGENERATED_TOKEN_HEADER=\"$(APP_BUILDER_OUTPUT_DIRECTORY)/_replace_tokenHeader_\" \
  -DAPPLICATION_TOKEN_HEADER=\"app/framework/util/tokens.h\" \
  $(COMPILER_GLOBAL_DEFINES) \
  _replace_dashDMacros_


OPTIONS= \
  -Wcast-align \
  -Wformat \
  -Wimplicit \
  -Wimplicit-int \
  -Wimplicit-function-declaration \
  -Winline \
  -Wmain \
  -Wnested-externs \
  -Wno-import \
  -Wparentheses \
  -Wpointer-arith \
  -Wredundant-decls \
  -Wreturn-type \
  -Wstrict-prototypes \
  -Wswitch \
  -Wunused-label \
  -Wunused-value \
  -ggdb \
  -O0

SIMULATION_FILES= \
  tool/simulator/child/adc.c    \
  tool/simulator/child/child.c  \
  tool/simulator/child/spawn.c  \
  tool/simulator/child/timer.c  \
  tool/simulator/child/uart.c

HOST_SIMULATION_FILES= \
  tool/simulator/child/ezsp-host-stubs.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/ezsp-host-sim.c

SPI_HOST_FILES= \
  app/util/ezsp/ezsp-callbacks.c       \
  app/util/ezsp/ezsp.c                 \
  app/util/ezsp/ezsp-frame-utilities.c \
  app/util/ezsp/serial-interface-spi.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/spi-protocol-ncp-sim.c

APPLICATION_FILES= \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/call-command-handler.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/callback-stub.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/cli.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/stack-handler-stub.c \
  $(APP_CALLBACK_FILE_DIRECTORY)/_replace_projectName__callbacks.c \
  app/framework/cli/core-cli.c \
  app/framework/cli/network-cli.c \
  app/framework/cli/option-cli.c \
  app/framework/cli/plugin-cli.c \
  app/framework/cli/security-cli.c \
  app/framework/cli/zcl-cli.c \
  app/framework/cli/zdo-cli.c \
  app/framework/security/af-node.c \
  app/framework/security/af-security-common.c \
  app/framework/security/af-trust-center.c \
  app/framework/security/crypto-state.c \
  app/framework/util/af-event.c \
  app/framework/util/af-event-host.c \
  app/framework/util/af-main-common.c \
  app/framework/util/af-main-host.c \
  app/framework/util/attribute-size.c \
  app/framework/util/attribute-storage.c \
  app/framework/util/attribute-table.c \
  app/framework/util/client-api.c \
  app/framework/util/message.c \
  app/framework/util/multi-network.c \
  app/framework/util/print.c \
  app/framework/util/print-formatter.c \
  app/framework/util/process-cluster-message.c \
  app/framework/util/process-global-message.c \
  app/framework/util/service-discovery-common.c \
  app/framework/util/service-discovery-host.c \
  app/framework/util/util.c \
  app/util/common/form-and-join-host-adapter.c \
  app/util/common/form-and-join.c \
  app/util/common/library.c \
  app/util/serial/command-interpreter2.c \
  app/util/serial/serial.c \
  app/util/security/security-address-cache.c \
  app/util/zigbee-framework/zigbee-device-common.c \
  app/util/zigbee-framework/zigbee-device-host.c \
  $(SIMULATION_FILES) \
  $(HOST_SIMULATION_FILES) \
  $(SPI_HOST_FILES) \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/button-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/buzzer-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/crc.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/led-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/mem-util.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/symbol-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/system-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/micro.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/fake-eeprom.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/random-sim.c \
_replace_includeFiles__replace_pluginFiles_

OUTPUT_DIR= build/_replace_projectName_
# A subtetly exists here.  We use the := variable syntax so we don't do recursive variable
# substitution.  The assumption being that both of these variables don't contain additional
# variables that must be resolved.  I tried using += without any success, and
# so := was the best alternative.
OUTPUT_DIR := $(OUTPUT_DIR)$(OUTPUT_DIR_GLOBAL_DEFINES_PATH)
OUTPUT_DIR_CREATED= $(OUTPUT_DIR)/created

# Build a list of object files from the source file list, but all objects
# live in the $(OUTPUT_DIR) above.  The list of object files
# created assumes that the file part of the filepath is unique
# (i.e. the bar.c of foo/bar.c is unique across all sub-directories included).
APPLICATION_OBJECTS= $(shell echo $(APPLICATION_FILES) | xargs -n1 echo | sed -e 's^.*/\(.*\)\.c^$(OUTPUT_DIR)/\1\.o^')

APP_FILE= $(OUTPUT_DIR)/_replace_projectName_

CPPFLAGS= $(INCLUDES) $(DEFINES) $(OPTIONS)

# Note:  Order matters.  This will insure linking will match up all the references since
# we only perform a single link pass.
LIBRARIES=

LINK_FLAGS=

# Rules

all: $(APP_FILE)

ifneq ($(MAKECMDGOALS),clean)
-include $(APPLICATION_OBJECTS:.o=.d)
endif

$(APP_FILE): $(APPLICATION_OBJECTS) $(LIBRARIES)
	$(LD) $^ $(LINK_FLAGS) -o $(APP_FILE)
	@echo -e '\n$@ build success'

clean:
	rm -rf $(OUTPUT_DIR)

$(OUTPUT_DIR_CREATED):
	mkdir -p $(OUTPUT_DIR)
	touch $(OUTPUT_DIR_CREATED)

include stack-libs.mak

# -MMD and -MF generates Makefile dependencies while at the same time compiling.
# -MP notes to add a dummy 'build' rule for each header file.  This 
# prevent a problem where a removed header file will generate an error because a
# dependency references it but it can't be found anymore.
# NOTE:  Because we want to delay interpreting $(@D) and $* we must use
# '=' instead of ':='
DEPENDENCY_OPTIONS = -MMD -MP -MF $(@D)/$*.d 
CPPFLAGS += $(DEPENDENCY_OPTIONS)

# To facilitate generating all output files in a single output directory, we
# must create separate .o.  VPATH can be used as an alternative but it is
# riskier if there is ever a collision of basenames for a file that is unused
# but lives in a directory in the VPATH.  For example, foo/bar/test.c 
# that is part of the build but foo/test-files/test.c that is unused by the 
# build, but where foo/test-files/ contains other files that are used by the build.

# Object File rules

$(OUTPUT_DIR)/%.o: $(APP_CALLBACK_FILE_DIRECTORY)/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(APP_BUILDER_OUTPUT_DIRECTORY)/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/cli/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

_replace_outputDirRulesMak_

$(OUTPUT_DIR)/%.o: app/framework/security/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/util/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/ezsp/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/security/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/serial/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/zigbee-framework/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/../phy/simulation/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: tool/simulator/child/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

# Special rule for the file containing 'main()'
# For the simulator we need code to execute prior to the application's 'main()'
# routine.  So we remap the application's 'main()' to be 'nodeMain()'.  Our 
# simulator main() routine runs first and then calls 'nodeMain()'.
$(OUTPUT_DIR)/af-main-host.o: app/framework/util/af-main-host.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -Dmain=nodeMain -c $< -o $(OUTPUT_DIR)/$(@F)

# Dependency rules

# NONE:  We changed the dependency generation to occur at the same time as compilation.
# No explicit rules are needed as a result.
