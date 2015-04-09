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
void emberAfServerDcapTmUriHandler(const struct UriData_s *data);
void emberAfServerMsgUriHandler(const struct UriData_s *data);
void emberAfServerMsgNUriHandler(const struct UriData_s *data);
void emberAfServerMsgNTxtUriHandler(const struct UriData_s *data);
void emberAfServerMsgNTxtNUriHandler(const struct UriData_s *data);
void emberAfServerMsgNActtxtUriHandler(const struct UriData_s *data);
void emberAfServerEdevNSubUriHandler(const struct UriData_s *data);
void emberAfServerEdevNSubNUriHandler(const struct UriData_s *data);
void emberAfServerUptUriHandler(const struct UriData_s *data);
void emberAfServerUptNUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRtUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRsUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRsNUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRsNRUriHandler(const struct UriData_s *data);
void emberAfServerUptNMrNRsNRNUriHandler(const struct UriData_s *data);
void emberAfServerEdevUriHandler(const struct UriData_s *data);
void emberAfServerEdevNUriHandler(const struct UriData_s *data);
void emberAfServerEdevNDstatUriHandler(const struct UriData_s *data);
void emberAfServerEdevNCfgUriHandler(const struct UriData_s *data);
void emberAfServerEdevNDiUriHandler(const struct UriData_s *data);
void emberAfServerRspsUriHandler(const struct UriData_s *data);
void emberAfServerRspsNUriHandler(const struct UriData_s *data);
void emberAfServerRspsNRspUriHandler(const struct UriData_s *data);
void emberAfServerRspsNRspNUriHandler(const struct UriData_s *data);

// Macro for the actual handlers array
#define EMBER_AF_URI_MAP_DATA_STANDARD \
  { "dcap", emberAfDcapUriHandler}, \
  { "sdev", emberAfSdevUriHandler}, \
  { "sdev/di", emberAfSdevDiUriHandler}, \
  { "sdev/cfg", emberAfSdevCfgUriHandler}, \
  { "time", emberAfServerDcapTmUriHandler}, \
  { "msg", emberAfServerMsgUriHandler}, \
  { "msg/#", emberAfServerMsgNUriHandler}, \
  { "msg/#/txt", emberAfServerMsgNTxtUriHandler}, \
  { "msg/#/txt/#", emberAfServerMsgNTxtNUriHandler}, \
  { "msg/#/acttxt", emberAfServerMsgNActtxtUriHandler}, \
  { "edev/#/sub", emberAfServerEdevNSubUriHandler}, \
  { "edev/#/sub/#", emberAfServerEdevNSubNUriHandler}, \
  { "upt", emberAfServerUptUriHandler}, \
  { "upt/#", emberAfServerUptNUriHandler}, \
  { "upt/#/mr", emberAfServerUptNMrUriHandler}, \
  { "upt/#/mr/#", emberAfServerUptNMrNUriHandler}, \
  { "upt/#/mr/#/r", emberAfServerUptNMrNRUriHandler}, \
  { "upt/#/mr/#/rt", emberAfServerUptNMrNRtUriHandler}, \
  { "upt/#/mr/#/rs", emberAfServerUptNMrNRsUriHandler}, \
  { "upt/#/mr/#/rs/#", emberAfServerUptNMrNRsNUriHandler}, \
  { "upt/#/mr/#/rs/#/r", emberAfServerUptNMrNRsNRUriHandler}, \
  { "upt/#/mr/#/rs/#/r/#", emberAfServerUptNMrNRsNRNUriHandler}, \
  { "edev", emberAfServerEdevUriHandler}, \
  { "edev/#", emberAfServerEdevNUriHandler}, \
  { "edev/#/dstat", emberAfServerEdevNDstatUriHandler}, \
  { "edev/#/cfg", emberAfServerEdevNCfgUriHandler}, \
  { "edev/#/di", emberAfServerEdevNDiUriHandler}, \
  { "rsps", emberAfServerRspsUriHandler}, \
  { "rsps/#", emberAfServerRspsNUriHandler}, \
  { "rsps/#/rsp", emberAfServerRspsNRspUriHandler}, \
  { "rsps/#/rsp/#", emberAfServerRspsNRspNUriHandler}, \
  { NULL, NULL }


#endif // __EMBER_AF_URI_MAP_DEFINITIONS__
