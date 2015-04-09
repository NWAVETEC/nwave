# This Makefile defines how to build a simulated App Framework application 
# for an SOC.

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

# The extra sed expression is to shorten, for example, "CYGWIN_NT-6.1" to just
# "CYGWIN."
UNAME:=$(shell uname -s | sed -e 's/^\(CYGWIN\).*/\1/')

# matchStackBase.mak finds the right base and sets GLOBAL_BASE_DIR.
include matchStackBase.mak
ifeq ($(origin GLOBAL_BASE_DIR), undefined)
  $(error ERROR: GLOBAL_BASE_DIR is not defined, I can not build, sorry.)
endif


# Makefile Variable replacement by sample-apps-regenerate.pl
APP_BUILDER_OUTPUT_DIRECTORY=app/framework/scenarios/zse/SeSampleCommsHub/gen/simulation
# Makefile Variable replacement by sample-apps-regenerate.pl
APP_CALLBACK_FILE_DIRECTORY=app/framework/scenarios/zse/SeSampleCommsHub
APP_BUILDER_CONFIG_HEADER=$(APP_BUILDER_OUTPUT_DIRECTORY)/SeSampleCommsHub.h
APP_BUILDER_STORAGE_FILE=$(APP_BUILDER_OUTPUT_DIRECTORY)/SeSampleCommsHub_endpoint_config.h

# Global defines allows the user to add #defines across all files
# All files will be compiled this way and the output directory
# will reflect these additional parameters as well.
# They can be specified on the command-line as follows:
#   make -f Foo.mak GLOBAL_DEFINES=EMBER_TEST
#   make -f Foo.mak GLOBAL_DEFINES="EMBER_TEST SOME_OTHER_DEFINE"
ifdef GLOBAL_DEFINES
  OUTPUT_DIR_GLOBAL_DEFINES_PATH=-$(shell echo $(GLOBAL_DEFINES) | sed -e 's/ /\-/g')
  COMPILER_GLOBAL_DEFINES=-D$(shell echo $(GLOBAL_DEFINES) | sed -e 's/ / \-D/g')
  REAL_ECC_TEST=$(shell echo $(GLOBAL_DEFINES) | sed -e 's/.*\(REAL_ECC\).*/\1/')
  ifeq ($(REAL_ECC_TEST), REAL_ECC)
    REAL_ECC=1
  endif
endif

INCLUDES= \
  -I. \
  -I$(APP_BUILDER_OUTPUT_DIRECTORY) \
  -I./app/framework/cli \
  -I./app/framework/include \
  -I./app/framework/plugin/address-table  \
  -I./app/framework/plugin/basic  \
  -I./app/framework/plugin/button-joining  \
  -I./app/framework/plugin/calendar-client  \
  -I./app/framework/plugin/calendar-common  \
  -I./app/framework/plugin/calendar-server  \
  -I./app/framework/plugin/color-control  \
  -I./app/framework/plugin/concentrator  \
  -I./app/framework/plugin/counters  \
  -I./app/framework/plugin/custom-ezsp  \
  -I./app/framework/plugin/device-management-client  \
  -I./app/framework/plugin/device-management-server  \
  -I./app/framework/plugin/diagnostic-server  \
  -I./app/framework/plugin/door-lock-server  \
  -I./app/framework/plugin/drlc  \
  -I./app/framework/plugin/drlc-server  \
  -I./app/framework/plugin/eeprom  \
  -I./app/framework/plugin/end-device-support  \
  -I./app/framework/plugin/esi-management  \
  -I./app/framework/plugin/events-client  \
  -I./app/framework/plugin/events-server  \
  -I./app/framework/plugin/ezmode-commissioning  \
  -I./app/framework/plugin/fragmentation  \
  -I./app/framework/plugin/gateway  \
  -I./app/framework/plugin/general-response-commands  \
  -I./app/framework/plugin/groups-client  \
  -I./app/framework/plugin/groups-server  \
  -I./app/framework/plugin/han-message-dispatch  \
  -I./app/framework/plugin/hc-11073-tunnel  \
  -I./app/framework/plugin/ias-zone-client  \
  -I./app/framework/plugin/ias-zone-server  \
  -I./app/framework/plugin/identify  \
  -I./app/framework/plugin/identify-feedback  \
  -I./app/framework/plugin/idle-sleep  \
  -I./app/framework/plugin/interpan  \
  -I./app/framework/plugin/key-establishment  \
  -I./app/framework/plugin/level-control  \
  -I./app/framework/plugin/messaging-client  \
  -I./app/framework/plugin/messaging-server  \
  -I./app/framework/plugin/meter-mirror  \
  -I./app/framework/plugin/meter-snapshot-client  \
  -I./app/framework/plugin/meter-snapshot-server  \
  -I./app/framework/plugin/meter-snapshot-storage  \
  -I./app/framework/plugin/mn-price-passthrough  \
  -I./app/framework/plugin/ncp-configuration  \
  -I./app/framework/plugin/network-find  \
  -I./app/framework/plugin/on-off  \
  -I./app/framework/plugin/ota-bootload  \
  -I./app/framework/plugin/ota-client  \
  -I./app/framework/plugin/ota-client-policy  \
  -I./app/framework/plugin/ota-common  \
  -I./app/framework/plugin/ota-server  \
  -I./app/framework/plugin/ota-server-policy  \
  -I./app/framework/plugin/ota-storage-common  \
  -I./app/framework/plugin/ota-storage-posix-filesystem  \
  -I./app/framework/plugin/ota-storage-simple  \
  -I./app/framework/plugin/ota-storage-simple-eeprom  \
  -I./app/framework/plugin/ota-storage-simple-ram  \
  -I./app/framework/plugin/partner-link-key-exchange  \
  -I./app/framework/plugin/poll-control-client  \
  -I./app/framework/plugin/poll-control-server  \
  -I./app/framework/plugin/prepayment-client  \
  -I./app/framework/plugin/prepayment-server  \
  -I./app/framework/plugin/price-client  \
  -I./app/framework/plugin/price-server  \
  -I./app/framework/plugin/reporting  \
  -I./app/framework/plugin/rf4ce-gdp  \
  -I./app/framework/plugin/rf4ce-mso  \
  -I./app/framework/plugin/rf4ce-profile  \
  -I./app/framework/plugin/rf4ce-zrc11  \
  -I./app/framework/plugin/rf4ce-zrc20  \
  -I./app/framework/plugin/scenes  \
  -I./app/framework/plugin/scenes-client  \
  -I./app/framework/plugin/simple-clock  \
  -I./app/framework/plugin/simple-metering-client  \
  -I./app/framework/plugin/simple-metering-server  \
  -I./app/framework/plugin/smart-energy-registration  \
  -I./app/framework/plugin/stack-diagnostics  \
  -I./app/framework/plugin/standalone-bootloader-client  \
  -I./app/framework/plugin/standalone-bootloader-common  \
  -I./app/framework/plugin/standalone-bootloader-server  \
  -I./app/framework/plugin/test-harness  \
  -I./app/framework/plugin/test-simee  \
  -I./app/framework/plugin/time-server  \
  -I./app/framework/plugin/trust-center-backup  \
  -I./app/framework/plugin/trust-center-keepalive  \
  -I./app/framework/plugin/trust-center-nwk-key-update-broadcast  \
  -I./app/framework/plugin/trust-center-nwk-key-update-periodic  \
  -I./app/framework/plugin/trust-center-nwk-key-update-unicast  \
  -I./app/framework/plugin/tunneling-client  \
  -I./app/framework/plugin/tunneling-server  \
  -I./app/framework/plugin/xmodem-sender  \
  -I./app/framework/plugin/zll-commissioning  \
  -I./app/framework/plugin/zll-identify-server  \
  -I./app/framework/plugin/zll-level-control-server  \
  -I./app/framework/plugin/zll-on-off-server  \
  -I./app/framework/plugin/zll-scenes-client  \
  -I./app/framework/plugin/zll-scenes-server  \
  -I./app/framework/plugin/zll-utility-client  \
  -I./app/framework/plugin/zll-utility-server  \
 \
 \
  -I./app/framework/security \
  -I./app/framework/util \
  -I./app/util \
  -I./app/util/common \
  -I./app/util/serial \
  -I./app/util/zigbee-framework \
  -I$(GLOBAL_BASE_DIR_HAL)/ \
  -I$(GLOBAL_BASE_DIR_HAL)/hal \
  -I$(GLOBAL_BASE_DIR_HAL)/hal/micro/generic \
  -I./stack \
  -I./tool/simulator/child

DEFINES= \
  -DPHY_EM250 \
  -DUNIX \
  -DPHY_NULL \
  -DEMBER_TEST \
  -DCONFIGURATION_HEADER=\"app/framework/util/config.h\" \
  -DZA_GENERATED_HEADER=\"$(APP_BUILDER_CONFIG_HEADER)\" \
  -DATTRIBUTE_STORAGE_CONFIGURATION=\"$(APP_BUILDER_STORAGE_FILE)\" \
  -DPLATFORM_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/compiler/gcc.h\" \
  -DBOARD_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/board/simulation.h\" \
  -DGENERATED_TOKEN_HEADER=\"$(APP_BUILDER_OUTPUT_DIRECTORY)/SeSampleCommsHub_tokens.h\" \
  -DAPPLICATION_TOKEN_HEADER=\"app/framework/util/tokens.h\" \
  $(COMPILER_GLOBAL_DEFINES) \
  


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

CRYPTO_FILES= \
  $(GLOBAL_BASE_DIR_HAL)/hal/../phy/simulation/security.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/rijndael-api-fst.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/rijndael-alg-fst.c

APPLICATION_FILES= \
  $(GLOBAL_BASE_DIR_HAL)/hal/ember-configuration.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/call-command-handler.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/callback-stub.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/cli.c \
  $(APP_BUILDER_OUTPUT_DIRECTORY)/stack-handler-stub.c \
  $(APP_CALLBACK_FILE_DIRECTORY)/SeSampleCommsHub_callbacks.c \
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
  app/framework/util/af-main-common.c \
  app/framework/util/af-main-soc.c \
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
  app/framework/util/service-discovery-soc.c \
  app/framework/util/util.c \
  app/util/common/form-and-join-node-adapter.c \
  app/util/common/form-and-join.c \
  app/util/common/library.c \
  app/util/serial/command-interpreter2.c \
  app/util/serial/serial.c \
  app/util/security/security-address-cache.c \
  app/util/zigbee-framework/zigbee-device-common.c \
  app/util/zigbee-framework/zigbee-device-library.c \
  $(SIMULATION_FILES) \
  $(CRYPTO_FILES) \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/ash-common.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/button-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/buzzer-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/crc.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/led-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/mem-util.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/symbol-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/system-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/token-ram.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/micro.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/bootloader.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/fake-eeprom.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/random-sim.c \
  app/framework/plugin/address-table/address-table-management.c \
  app/framework/plugin/address-table/address-table-cli.c \
  app/framework/plugin/address-table/address-table-soc.c \
  app/framework/plugin/concentrator/concentrator-support.c \
  app/framework/plugin/concentrator/concentrator-support-cli.c \
  app/util/source-route-common.c \
  app/util/source-route.c \
  app/framework/plugin/fragmentation/fragmentation.c \
  app/framework/plugin/fragmentation/fragmentation-cli.c \
  app/framework/plugin/fragmentation/fragmentation-soc.c \
  app/framework/plugin/key-establishment/key-establishment.c \
  app/framework/plugin/key-establishment/key-establishment-cli.c \
  app/framework/plugin/key-establishment/key-establishment-curve-support.c \
  app/framework/plugin/key-establishment/key-establishment-storage-buffers.c \
  app/framework/plugin/messaging-server/messaging-server.c \
  app/framework/plugin/messaging-server/messaging-server-cli.c \
  app/framework/plugin/meter-mirror/meter-mirror.c \
  app/framework/plugin/meter-mirror/meter-mirror-cli.c \
  app/framework/plugin/meter-snapshot-server/meter-snapshot-server.c \
  app/framework/plugin/meter-snapshot-storage/meter-snapshot-storage.c \
  app/framework/plugin/network-find/network-find.c \
  app/framework/plugin/partner-link-key-exchange/partner-link-key-exchange.c \
  app/framework/plugin/partner-link-key-exchange/partner-link-key-exchange-cli.c \
  app/framework/plugin/price-server/price-server.c \
  app/framework/plugin/price-server/price-server-cli.c \
  app/framework/plugin/price-server/price-server-tariff-matrix.c \
  app/framework/plugin/price-server/price-server-tariff-matrix-cli.c \
  app/framework/plugin/simple-metering-client/simple-metering-client.c \
  app/framework/plugin/simple-metering-server/simple-metering-server.c \
  app/framework/plugin/simple-metering-server/simple-metering-test.c \
  app/framework/plugin/simple-metering-server/simple-metering-server-cli.c \
  app/framework/plugin/smart-energy-registration/smart-energy-registration.c \
  app/framework/plugin/smart-energy-registration/smart-energy-registration-cli.c \
  app/framework/plugin/time-server/time-server.c \
  app/framework/plugin/tunneling-client/tunneling-client.c \
  app/framework/plugin/tunneling-client/tunneling-client-cli.c \
  app/framework/plugin/tunneling-server/tunneling-server.c \
  app/framework/plugin/tunneling-server/tunneling-server-cli.c \


# Makefile Variable replacement by sample-apps-regenerate.pl
OUTPUT_DIR=build/af-test-apps/SeSampleCommsHub-simulation
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

APP_FILE= $(OUTPUT_DIR)/SeSampleCommsHub

CPPFLAGS= $(INCLUDES) $(DEFINES) $(OPTIONS)

# TODO-LIB: Remove library replacements for libraries-are-plugins feature.
LIBRARIES=\
  \
  \
 build/alarm-stub-library-unix-gcc-simulation-simulation/alarm-stub-library.a \
 build/binding-table-library-unix-gcc-simulation-simulation/binding-table-library.a \
 build/cbke-library-dsa-sign-stub-unix-gcc-simulation-simulation/cbke-library-dsa-sign-stub.a \
 build/cbke-library-dsa-verify-stub-unix-gcc-simulation-simulation/cbke-library-dsa-verify-stub.a \
 build/cbke-stub-library-unix-gcc-simulation-simulation/cbke-stub-library.a \
 build/cbke-163k1-stub-library-unix-gcc-simulation-simulation/cbke-163k1-stub-library.a \
 build/cbke-283k1-stub-library-unix-gcc-simulation-simulation/cbke-283k1-stub-library.a \
  \
  \
 build/end-device-bind-stub-library-unix-gcc-simulation-simulation/end-device-bind-stub-library.a \
 build/install-code-library-stub-unix-gcc-simulation-simulation/install-code-library-stub.a \
 build/multi-network-stub-library-unix-gcc-simulation-simulation/multi-network-stub-library.a \
 build/packet-validate-library-unix-gcc-simulation-simulation/packet-validate-library.a \
 build/rf4ce-stack-stub-library-unix-gcc-simulation-simulation/rf4ce-stack-stub-library.a \
 build/security-library-link-keys-unix-gcc-simulation-simulation/security-library-link-keys.a \
 build/security-library-core-unix-gcc-simulation-simulation/security-library-core.a \
 build/zigbee-pro-stack-unix-gcc-simulation-simulation/zigbee-pro-stack.a \
 build/zll-stub-library-unix-gcc-simulation-simulation/zll-stub-library.a \
 $(CBKE_AND_ECC_LIBRARIES)

# This variable is only used by sample-apps-regenerate.pl to segregrate the ECC related
# items so it can be built on platforms without ECC (e.g. Mac).
# Passing REAL_ECC=1 will have the effect of including or not including the appropriate
# libraries.  Those libraries can still be configured as Plugins via AppBuilder.
ifdef REAL_ECC
  CBKE_AND_ECC_LIBRARIES=
else
  CBKE_AND_ECC_LIBRARIES=
endif

LINK_FLAGS=

# Rules

all: $(APP_FILE)

ifneq ($(MAKECMDGOALS),clean)
-include $(APPLICATION_OBJECTS:.o=.d)
endif

# Order of linking libraries (unfortunately) matters to the GNU linker.
# However by passing --start-group $(ARCHIVES) --end-group we can get it to do
# multiple passes.  Since those are actually GNU ld linker options, we need
# to prefix each option with -Xlinker to pass it through from GCC to ld.
$(APP_FILE): $(APPLICATION_OBJECTS) $(LIBRARIES)
ifeq ($(UNAME),Darwin)
	$(LD) $^ $(LINK_FLAGS) -o $(APP_FILE)
else
	$(LD) $(APPLICATION_OBJECTS) $(LINK_FLAGS) -Xlinker --start-group $(LIBRARIES) -Xlinker --end-group -o $(APP_FILE)
endif
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

$(OUTPUT_DIR)/%.o: app/framework/plugin/address-table/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/basic/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/button-joining/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/calendar-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/calendar-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/calendar-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/color-control/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/concentrator/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/counters/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/custom-ezsp/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/device-management-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/device-management-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/diagnostic-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/door-lock-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/drlc/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/drlc-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/eeprom/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/end-device-support/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/esi-management/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/events-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/events-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ezmode-commissioning/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/fragmentation/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/gateway/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/general-response-commands/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/groups-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/groups-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/han-message-dispatch/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/hc-11073-tunnel/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ias-zone-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ias-zone-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/identify/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/identify-feedback/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/idle-sleep/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/interpan/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/key-establishment/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/level-control/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/messaging-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/messaging-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/meter-mirror/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/meter-snapshot-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/meter-snapshot-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/meter-snapshot-storage/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/mn-price-passthrough/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ncp-configuration/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/network-find/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/on-off/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-bootload/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-client-policy/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-server-policy/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-storage-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-storage-posix-filesystem/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-storage-simple/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-storage-simple-eeprom/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/ota-storage-simple-ram/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/partner-link-key-exchange/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/poll-control-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/poll-control-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/prepayment-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/prepayment-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/price-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/price-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/reporting/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/rf4ce-gdp/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/rf4ce-mso/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/rf4ce-profile/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/rf4ce-zrc11/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/rf4ce-zrc20/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/scenes/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/scenes-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/simple-clock/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/simple-metering-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/simple-metering-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/smart-energy-registration/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/stack-diagnostics/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/standalone-bootloader-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/standalone-bootloader-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/standalone-bootloader-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/test-harness/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/test-simee/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/time-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/trust-center-backup/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/trust-center-keepalive/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/trust-center-nwk-key-update-broadcast/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/trust-center-nwk-key-update-periodic/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/trust-center-nwk-key-update-unicast/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/tunneling-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/tunneling-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/xmodem-sender/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-commissioning/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-identify-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-level-control-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-on-off-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-scenes-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-scenes-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-utility-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/plugin/zll-utility-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)



$(OUTPUT_DIR)/%.o: app/framework/security/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/framework/util/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/common/%.c $(OUTPUT_DIR_CREATED)
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
$(OUTPUT_DIR)/af-main-soc.o: app/framework/util/af-main-soc.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -Dmain=nodeMain -c $< -o $(OUTPUT_DIR)/$(@F)

# Dependency rules

# NONE:  We changed the dependency generation to occur at the same time as compilation.
# No explicit rules are needed as a result.
