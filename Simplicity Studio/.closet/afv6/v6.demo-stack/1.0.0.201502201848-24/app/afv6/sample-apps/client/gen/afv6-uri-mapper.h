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
void emberAfClientLsaUriHandler(const struct UriData_s *data);
void emberAfClientPowerStatusUriHandler(const struct UriData_s *data);
void emberAfServerNsUriHandler(const struct UriData_s *data);
void emberAfServerNsNUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrNUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrNRplUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrNRplNUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrNRplNSrtUriHandler(const struct UriData_s *data);
void emberAfServerNsNAddrNRplNSrtNUriHandler(const struct UriData_s *data);
void emberAfServerNsNLlUriHandler(const struct UriData_s *data);
void emberAfServerNsNLlNUriHandler(const struct UriData_s *data);
void emberAfServerNsNLlNNbhUriHandler(const struct UriData_s *data);
void emberAfServerNsNLlNNbhNUriHandler(const struct UriData_s *data);

// Macro for the actual handlers array
#define EMBER_AF_URI_MAP_DATA_STANDARD \
  { "dcap", emberAfDcapUriHandler}, \
  { "sdev", emberAfSdevUriHandler}, \
  { "sdev/di", emberAfSdevDiUriHandler}, \
  { "sdev/cfg", emberAfSdevCfgUriHandler}, \
  { "push", emberAfClientPushUriHandler}, \
  { "dcap/sdev/lel", emberAfClientDcapSdevLelUriHandler}, \
  { "dcap/sdev/lel/#", emberAfClientDcapSdevLelNUriHandler}, \
  { "lsa", emberAfClientLsaUriHandler}, \
  { "powerStatus", emberAfClientPowerStatusUriHandler}, \
  { "ns", emberAfServerNsUriHandler}, \
  { "ns/#", emberAfServerNsNUriHandler}, \
  { "ns/#/addr", emberAfServerNsNAddrUriHandler}, \
  { "ns/#/addr/#", emberAfServerNsNAddrNUriHandler}, \
  { "ns/#/addr/#/rpl", emberAfServerNsNAddrNRplUriHandler}, \
  { "ns/#/addr/#/rpl/#", emberAfServerNsNAddrNRplNUriHandler}, \
  { "ns/#/addr/#/rpl/#/srt", emberAfServerNsNAddrNRplNSrtUriHandler}, \
  { "ns/#/addr/#/rpl/#/srt/#", emberAfServerNsNAddrNRplNSrtNUriHandler}, \
  { "ns/#/ll", emberAfServerNsNLlUriHandler}, \
  { "ns/#/ll/#", emberAfServerNsNLlNUriHandler}, \
  { "ns/#/ll/#/nbh", emberAfServerNsNLlNNbhUriHandler}, \
  { "ns/#/ll/#/nbh/#", emberAfServerNsNLlNNbhNUriHandler}, \
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
