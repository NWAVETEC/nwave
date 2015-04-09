// This file is generated. Please do not edit manually.
// 
//

// This file contains the mapping for the URI configuration
// Enclosing macro to prevent multiple inclusion
#ifndef __EMBER_AF_URI_MAP_DEFINITIONS__
#define __EMBER_AF_URI_MAP_DEFINITIONS__


#define EMBER_AF_URI_MAP_STANDARD 0

// Prototypes for handlers

struct UriData_s;

void emberAfDcapUriHandler(const struct UriData_s *data);
void emberAfSdevUriHandler(const struct UriData_s *data);
void emberAfSdevDiUriHandler(const struct UriData_s *data);
void emberAfSdevCfgUriHandler(const struct UriData_s *data);
void emberAfClientPushUriHandler(const struct UriData_s *data);
void emberAfClientDcapSdevLelUriHandler(const struct UriData_s *data);
void emberAfClientDcapSdevLelNUriHandler(const struct UriData_s *data);

// Macro for the actual handlers array
#define EMBER_AF_URI_MAP_DATA_STANDARD \
  { "dcap", emberAfDcapUriHandler}, \
  { "sdev", emberAfSdevUriHandler}, \
  { "sdev/di", emberAfSdevDiUriHandler}, \
  { "sdev/cfg", emberAfSdevCfgUriHandler}, \
  { "push", emberAfClientPushUriHandler}, \
  { "dcap/sdev/lel", emberAfClientDcapSdevLelUriHandler}, \
  { "dcap/sdev/lel/#", emberAfClientDcapSdevLelNUriHandler}, \
  { NULL, NULL }


#define EMBER_AF_URI_MAP_SUBSCRIPTIONCLIENT 1

// Prototypes for handlers

struct UriData_s;

void emberAfClientMsgNTxtUriHandler(const struct UriData_s *data);

// Macro for the actual handlers array
#define EMBER_AF_URI_MAP_DATA_SUBSCRIPTIONCLIENT \
  { "msg/#/txt", emberAfClientMsgNTxtUriHandler}, \
  { NULL, NULL }


#endif // __EMBER_AF_URI_MAP_DEFINITIONS__
