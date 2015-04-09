E_CC ?= gcc
CC = $(E_CC)
LD = $(E_CC)
SHELL = /bin/sh
GLOBAL_BASE_DIR_HAL=../../base/main/hal/..

INCLUDES= \
  -I. \
  -I./app/afv6/core \
  -I./app/afv6/plugin/cli \
  -I./app/afv6/plugin/common \
  -I./app/afv6/plugin/debug-print \
  -I./app/afv6/plugin/exi \
  -I./app/afv6/plugin/http \
  -I./app/afv6/plugin/log-event-common \
  -I./app/afv6/plugin/log-event-server \
  -I./app/afv6/plugin/metering-common \
  -I./app/afv6/plugin/metering-server \
  -I./app/afv6/plugin/server \
  -I./app/afv6/plugin/subscription-server \
  -I./app/afv6/plugin/time-server \
  -Iapp/afv6/sample-apps/upt-linux/gen \
  -I./app/coap \
  -I./app/http \
  -I./app/ip-ncp \
  -I./app/util/exi \
  -I./app/util/ip \
  -I./app/util/serial \
  -I./$(GLOBAL_BASE_DIR_HAL) \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal/micro/generic \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/host \
  -I./$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/simulation \
  -I./stack \
  -I./stack/config \
  -I./stack/core \
  -I./stack/framework \
  -I./stack/ip \
  -I./stack/ip/host \
  -I./stack/ip/tls \
  -I/opt/local/include

DEFINES= \
  -DEMBER_STACK_IP \
  -DHAL_MICRO \
  -DUNIX \
  -DUNIX_HOST \
  -DPHY_NULL \
  -DBOARD_HOST \
  -DBOARD_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/host/board/host.h\" \
  -DPLATFORM_HEADER=\"$(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/compiler/gcc.h\" \
  -DCONFIGURATION_HEADER=\"app/afv6/sample-apps/upt-linux/gen/afv6-config.h\" \
  -DEMBER_LOG_HTTP \
  -DHAVE_TLS_ECDHE_ECDSA \
  -DEMBER_APPLICATION_HAS_BINARY_COMMAND_INTERPRETER \
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
  app/afv6/plugin/common/se2-library.c \
  app/afv6/plugin/common/uri-discoverer.c \
  app/afv6/plugin/common/unix-host-utilities.c \
  app/afv6/plugin/debug-print/print.c \
  app/afv6/plugin/exi/exi-plugin.c \
  app/afv6/plugin/exi/exi-utilities.c \
  app/afv6/plugin/http/http-plugin.c \
  app/afv6/plugin/log-event-common/log-event-common.c \
  app/afv6/plugin/log-event-server/log-event-server.c \
  app/afv6/plugin/metering-common/reading.c \
  app/afv6/plugin/metering-server/metering-server.c \
  app/afv6/plugin/server/server.c \
  app/afv6/plugin/subscription-server/subscription-server.c \
  app/afv6/plugin/time-server/time-server.c \
  app/afv6/sample-apps/upt-linux/gen/afv6-exi-api.c \
  app/afv6/sample-apps/upt-linux/gen/afv6-callback-stubs.c \
  app/afv6/sample-apps/upt-linux/gen/afv6-callbacks.c \
  app/afv6/sample-apps/upt-linux/gen/afv6-uri-mapper.c \
  app/afv6/sample-apps/upt-linux/gen/afv6-events.c \
  app/coap/coap-stub.c \
  app/http/http.c \
  app/http/rest.c \
  app/util/exi/exi-bits.c \
  app/util/exi/exi-datatypes.c \
  app/util/exi/exi-decoder.c \
  app/util/exi/exi-encoder.c \
  app/util/exi/exi-string-table.c \
  app/util/exi/xml-decoder.c \
  app/util/exi/xml-tag-stack.c \
  app/util/exi/xml-encoder.c \
  app/util/ip/network-management-commands.c \
  app/util/ip/print-utilities.c \
  app/util/serial/command-interpreter2.c \
  app/util/serial/command-interpreter2-error.c \
  app/util/serial/command-interpreter2-util.c \
  app/util/serial/command-interpreter2-binary.c \
  app/util/serial/simple-linux-serial.c \
  app/ip-ncp/management.c \
  app/ip-ncp/binary-management.c \
  app/ip-ncp/host-stream.c \
  stack/core/log.c \
  stack/config/ember-ip-configuration.c \
  stack/framework/buffer-management.c \
  stack/framework/buffer-malloc.c \
  stack/framework/byte-utilities.c \
  stack/framework/event-control.c \
  stack/ip/host-tcp-wrapper.c \
  stack/ip/host-udp-wrapper.c \
  stack/ip/host/host-network-management.c \
  stack/ip/host/management-client.c \
  stack/ip/transport-header.c \
  stack/ip/rip-stub.c \
  stack/ip/udp.c \
  stack/ip/connection.c \
  stack/ip/mdns.c \
  stack/ip/tls/pana.c \
  stack/ip/tls/pana-util.c \
  stack/ip/tls/eap.c \
  stack/ip/tls/tls-handshake.c \
  stack/ip/tls/tls-handshake-crypto.c \
  stack/ip/tls/tls-ccm-record.c \
  stack/ip/tls/tls-record-util.c \
  stack/ip/tls/tls-session-state.c \
  stack/ip/tls/tls-debug.c \
  stack/ip/tls/tls-tcp.c \
  stack/ip/tls/sha256.c \
  stack/ip/tls/dtls-stub.c \
  stack/ip/tls/tls-ecc.c \
  stack/ip/tls/ecc-openssl.c \
  stack/ip/tls/certificate.c \
  stack/ip/tls/tls-public-key.c \
  stack/ip/tls/tls-test-credentials.c \
  stack/ip/ip-address.c \
  stack/ip/global-prefix.c \
  stack/mac/802.15.4/802-15-4-ccm.c \
  stack/platform/micro/generic/aes.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/rijndael-alg-fst.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/rijndael-api-fst.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/crc.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/mem-util.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/random.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/system-timer.c \
  $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/host/micro.c \


OUTPUT_DIR= build/afv6-upt-linux
OUTPUT_DIR_CREATED= $(OUTPUT_DIR)/created
# Build a list of object files from the source file list, but all objects
# live in the $(OUTPUT_DIR) above.  The list of object files
# created assumes that the file part of the filepath is unique
# (i.e. the bar.c of foo/bar.c is unique across all sub-directories included).
APPLICATION_OBJECTS= $(shell echo $(APPLICATION_FILES) | xargs -n1 echo | sed -e 's^.*/\(.*\)\.c^$(OUTPUT_DIR)/\1\.o^')

APP_LIBRARIES= \

APP_FILE= $(OUTPUT_DIR)/afv6-upt-linux

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

$(OUTPUT_DIR)/%.o: app/afv6/plugin/common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/debug-print/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/exi/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/http/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/log-event-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/log-event-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/metering-common/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/metering-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/subscription-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/afv6/plugin/time-server/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)



$(OUTPUT_DIR)/%.o: app/afv6/sample-apps/upt-linux/gen/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/coap/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/host/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/http/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/ip-ncp/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/exi/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/ip/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: app/util/serial/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/generic/aes/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: $(GLOBAL_BASE_DIR_HAL)/hal/micro/unix/host/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/config/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/core/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/framework/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/ip/host/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/ip/tls/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/ip/tls/credentials/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/ip/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/mac/802.15.4/%.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/%.o: stack/platform/micro/generic/%.c $(OUTPUT_DIR_CREATED)
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
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/cli.o: app/afv6/plugin/cli/cli.c $(OUTPUT_DIR_CREATED)
	$(CC) $(CPPFLAGS) -c $< -o $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/main.d: app/afv6/plugin/common/main.c $(OUTPUT_DIR_CREATED)
	@set -e; $(CC) -MM $(CPPFLAGS) $<				\
		| sed 's^\($(*F)\)\.o[ :]*^$(OUTPUT_DIR)/\1.o $(OUTPUT_DIR)/$(@F) : ^g' > $(OUTPUT_DIR)/$(@F);	\
		echo 'created dependency file $(OUTPUT_DIR)/$(@F)';			\
		[ -s $(OUTPUT_DIR)/$(@F) ] || rm -f $(OUTPUT_DIR)/$(@F)

$(OUTPUT_DIR)/cli.d: app/afv6/plugin/cli/cli.c $(OUTPUT_DIR_CREATED)
	@set -e; $(CC) -MM $(CPPFLAGS) $<				\
		| sed 's^\($(*F)\)\.o[ :]*^$(OUTPUT_DIR)/\1.o $(OUTPUT_DIR)/$(@F) : ^g' > $(OUTPUT_DIR)/$(@F);	\
		echo 'created dependency file $(OUTPUT_DIR)/$(@F)';			\
		[ -s $(OUTPUT_DIR)/$(@F) ] || rm -f $(OUTPUT_DIR)/$(@F)
