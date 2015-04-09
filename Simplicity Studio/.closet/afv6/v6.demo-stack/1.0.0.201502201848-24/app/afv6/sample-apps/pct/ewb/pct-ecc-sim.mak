E_CC ?= gcc
CC = $(E_CC)
LD = $(E_CC)
SHELL = /bin/sh
GLOBAL_BASE_DIR_HAL=../../base/main/hal/..

INCLUDES= \
  -I. \
  -I./app/afv6/core \
  -I./app/afv6/plugin/cli \
  -I./app/afv6/plugin/client \
  -I./app/afv6/plugin/common \
  -I./app/afv6/plugin/debug-print \
  -I./app/afv6/plugin/drlc-client \
  -I./app/afv6/plugin/drlc-common \
  -I./app/afv6/plugin/exi \
  -I./app/afv6/plugin/function-set-assignments-client \
  -I./app/afv6/plugin/http \
  -I./app/afv6/plugin/log-event-client \
  -I./app/afv6/plugin/log-event-common \
  -I./app/afv6/plugin/messaging-client \
  -I./app/afv6/plugin/messaging-common \
  -I./app/afv6/plugin/software-download-client \
  -I./app/afv6/plugin/subscription-client \
  -I./app/afv6/plugin/time-client \
  -Iapp/afv6/sample-apps/pct/gen \
  -I./$(GLOBAL_BASE_DIR_HAL) \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation \
  -I./stack \

DEFINES= \
  -DEMBER_TEST \
  -DPHY_EM250 \
  -DEMBER_STACK_IP \
  -DHAL_MICRO \
  -DUNIX \
  -DUNIX_SIMULATION \
  -DPHY_SIMULATION \
  -DBOARD_SIMULATION \
  -DBOARD_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/board/simulation.h\" \
  -DPLATFORM_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/compiler/gcc.h\" \
  -DCONFIGURATION_HEADER=\"app/afv6/sample-apps/pct/gen/afv6-config.h\" \
  -DEMBER_ASSERT_SERIAL_PORT=1 \
  -DEMBER_SERIAL1_BLOCKING -DEMBER_SERIAL1_MODE=EMBER_SERIAL_FIFO -DEMBER_SERIAL1_TX_QUEUE_SIZE=128 -DEMBER_SERIAL1_RX_QUEUE_SIZE=128 \
  -DAPP_SERIAL=1 \


OPTIONS= \
  -Wcast-align \
  -Wformat \
  -Wimplicit \
  -Wimplicit-int \
  -Wimplicit-function-declaration \
  -Winline \
  -Wno-long-long \
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
  -g \
  -O0

APPLICATION_FILES= \
  app/afv6/plugin/cli/cli.c \
  app/afv6/plugin/client/client.c \
  app/afv6/plugin/common/common.c \
  app/afv6/plugin/common/main.c \
  app/afv6/plugin/common/uri-handler.c \
  app/afv6/plugin/common/scheduled-object.c \
  app/afv6/plugin/common/list.c \
  app/afv6/plugin/common/end-device.c \
  app/afv6/plugin/common/action-handler.c \
  app/afv6/plugin/common/ecc-certificate.c \
  app/afv6/plugin/common/dynamic-uri-handler-lookup.c \
  app/afv6/plugin/common/scratchpad.c \
  app/afv6/plugin/common/uri-parser.c \
  app/afv6/plugin/debug-print/print.c \
  app/afv6/plugin/drlc-client/drlc-client.c \
  app/afv6/plugin/drlc-common/drlc-common.c \
  app/afv6/plugin/drlc-common/end-device-control.c \
  app/afv6/plugin/exi/exi-plugin.c \
  app/afv6/plugin/exi/exi-utilities.c \
  app/afv6/plugin/function-set-assignments-client/function-set-assignments-client.c \
  app/afv6/plugin/http/http-plugin.c \
  app/afv6/plugin/log-event-client/log-event-client.c \
  app/afv6/plugin/log-event-common/log-event-common.c \
  app/afv6/plugin/messaging-client/messaging-client.c \
  app/afv6/plugin/messaging-common/text-message.c \
  app/afv6/plugin/software-download-client/software-download-client.c \
  app/afv6/plugin/subscription-client/subscription-client.c \
  app/afv6/plugin/time-client/time-client.c \
  app/afv6/sample-apps/pct/gen/afv6-uri-mapper.c \
  app/afv6/sample-apps/pct/gen/afv6-exi-api.c \
  app/afv6/sample-apps/pct/gen/afv6-events.c \
  app/afv6/sample-apps/pct/gen/afv6-callback-stubs.c \
  app/afv6/sample-apps/pct/gen/afv6-callbacks.c \
 \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/micro.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/crc-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/random-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/symbol-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/system-timer-sim.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/led-stub.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/token-ram.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/ember-base-configuration.c \
  tool/simulator/child/child.c \
  tool/simulator/child/timer.c \
  tool/simulator/child/uart.c \
  app/util/serial/serial.c \
  app/util/serial/serial-printf.c \
  stack/config/ember-ip-configuration.c \


OUTPUT_DIR= build/afv6-pct-ecc-unix-simulation
OUTPUT_DIR_CREATED= $(OUTPUT_DIR)/created
# Build a list of object files from the source file list, but all objects
# live in the $(OUTPUT_DIR) above.  The list of object files
# created assumes that the file part of the filepath is unique
# (i.e. the bar.c of foo/bar.c is unique across all sub-directories included).
APPLICATION_OBJECTS= $(shell echo $(APPLICATION_FILES) | xargs -n1 echo | sed -e 's^.*/\(.*\)\.c^$(OUTPUT_DIR)/\1\.o^')

APP_LIBRARIES= \
  build/zigbee-ip-ecc-stack-unix-gcc-simulation-simulation/zigbee-ip-ecc-stack.a \
  build/ip-ecc-library-internal-unix-gcc-simulation-simulation/ip-ecc-library-internal.a \
  build/hal-library-unix-gcc-simulation-simulation/hal-library.a \
  build/afv6-library-unix-gcc-simulation-simulation/afv6-library.a \
  build/zigbee-ip-ecc-stack-unix-gcc-simulation-simulation/zigbee-ip-ecc-stack.a \

APP_FILE= $(OUTPUT_DIR)/afv6-pct-ecc

CPPFLAGS= $(INCLUDES) $(DEFINES) $(OPTIONS)
LINK_FLAGS= \
  -L/opt/local/lib -lcrypto

# Rules

all: $(APP_FILE)

ifneq ($(MAKECMDGOALS),clean)
-include $(APPLICATION_OBJECTS:.o=.d)
endif

$(APP_FILE): $(APPLICATION_OBJECTS) $(APP_LIBRARIES)
	$(LD) $^ $(LINK_FLAGS) $(APP_LIBRARIES) -o $(APP_FILE)
	@echo -e '\n$@ build success'

clean:
	rm -rf $(OUTPUT_DIR)

$(OUTPUT_DIR_CREATED):
	mkdir -p $(OUTPUT_DIR)
	touch $(OUTPUT_DIR_CREATED)

# To facilitate generating all output files in a single output directory, we
# must create separate .o and .d rules for all the different sub-directories
# used by the source files.
# If additional directories are added that are not already in the
# $(APPLICATION_FILES) above, new rules will have to be created below.

# Object File rules

$(OUTPUT_DIR)/%.o: app/afv6/core/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/cli/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/debug-print/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/drlc-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/drlc-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/exi/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/function-set-assignments-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/http/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/log-event-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/log-event-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/messaging-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/messaging-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/software-download-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/subscription-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/time-client/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)



$(OUTPUT_DIR)/%.o: app/afv6/sample-apps/pct/gen/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/config/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/serial/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: tool/simulator/child/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

# Special rules for files with basenames that conflict
# with another UNUSED file basename in a different directory where
# we have generic rules. (i.e. foo/bar.c and bar/bar.c where only
# the former is used in the build but a rule exists for bar/%.o).
#
# Two files with the same basename included in the APPLICATION_FILES variable
# is NOT supported.  The APPLICATION_OBJECT variable assumes uniqueness across
# all used source directories.

$(OUTPUT_DIR)/main.o: app/afv6/plugin/common/main.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -Dmain=nodeMain -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/main.d: app/afv6/plugin/common/main.c $(OUTPUT_DIR_CREATED)
	@set -e; $(CC) -MM $(CPPFLAGS) $<				\
		| sed 's^\($(*F)\)\.o[ :]*^$(OUTPUT_DIR)/\1.o $(OUTPUT_DIR)/$(@F) : ^g' > $(OUTPUT_DIR)/$(@F);	\
		echo 'created dependency file $(OUTPUT_DIR)/$(@F)';			\
		[ -s $(OUTPUT_DIR)/$(@F) ] || rm -f $(OUTPUT_DIR)/$(@F)
