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
void emberAfServerEdevNSubUriHandler(const struct UriData_s *data);
void emberAfServerEdevNSubNUriHandler(const struct UriData_s *data);
void emberAfServerDcapTmUriHandler(const struct UriData_s *data);
void emberAfServerEdevNLelUriHandler(const struct UriData_s *data);
void emberAfServerMsgUriHandler(const struct UriData_s *data);
void emberAfServerMsgNUriHandler(const struct UriData_s *data);
void emberAfServerMsgNTxtUriHandler(const struct UriData_s *data);
void emberAfServerMsgNTxtNUriHandler(const struct UriData_s *data);
void emberAfServerMsgNActtxtUriHandler(const struct UriData_s *data);
void emberAfServerDrUriHandler(const struct UriData_s *data);
void emberAfServerDrNUriHandler(const struct UriData_s *data);
void emberAfServerDrNEdcUriHandler(const struct UriData_s *data);
void emberAfServerDrNEdcNUriHandler(const struct UriData_s *data);
void emberAfServerEdevUriHandler(const struct UriData_s *data);
void emberAfServerEdevNUriHandler(const struct UriData_s *data);
void emberAfServerEdevNDstatUriHandler(const struct UriData_s *data);
void emberAfServerEdevNCfgUriHandler(const struct UriData_s *data);
void emberAfServerEdevNDiUriHandler(const struct UriData_s *data);
void emberAfServerRspsUriHandler(const struct UriData_s *data);
void emberAfServerRspsNUriHandler(const struct UriData_s *data);
void emberAfServerRspsNRspUriHandler(const struct UriData_s *data);
void emberAfServerRspsNRspNUriHandler(const struct UriData_s *data);
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
void emberAfServerEdevNFsaUriHandler(const struct UriData_s *data);
void emberAfServerEdevNFsaNUriHandler(const struct UriData_s *data);
void emberAfServerFileUriHandler(const struct UriData_s *data);
void emberAfServerFileNUriHandler(const struct UriData_s *data);
void emberAfServerShinyNewFirmwareUriHandler(const struct UriData_s *data);
void emberAfEdevNPowerStatusUriHandler(const struct UriData_s *data);

// Macro for the actual handlers array
#define EMBER_AF_URI_MAP_DATA_STANDARD \
  { "dcap", emberAfDcapUriHandler}, \
  { "sdev", emberAfSdevUriHandler}, \
  { "sdev/di", emberAfSdevDiUriHandler}, \
  { "sdev/cfg", emberAfSdevCfgUriHandler}, \
  { "edev/#/sub", emberAfServerEdevNSubUriHandler}, \
  { "edev/#/sub/#", emberAfServerEdevNSubNUriHandler}, \
  { "time", emberAfServerDcapTmUriHandler}, \
  { "edev/#/lel", emberAfServerEdevNLelUriHandler}, \
  { "msg", emberAfServerMsgUriHandler}, \
  { "msg/#", emberAfServerMsgNUriHandler}, \
  { "msg/#/txt", emberAfServerMsgNTxtUriHandler}, \
  { "msg/#/txt/#", emberAfServerMsgNTxtNUriHandler}, \
  { "msg/#/acttxt", emberAfServerMsgNActtxtUriHandler}, \
  { "dr", emberAfServerDrUriHandler}, \
  { "dr/#", emberAfServerDrNUriHandler}, \
  { "dr/#/edc", emberAfServerDrNEdcUriHandler}, \
  { "dr/#/edc/#", emberAfServerDrNEdcNUriHandler}, \
  { "edev", emberAfServerEdevUriHandler}, \
  { "edev/#", emberAfServerEdevNUriHandler}, \
  { "edev/#/dstat", emberAfServerEdevNDstatUriHandler}, \
  { "edev/#/cfg", emberAfServerEdevNCfgUriHandler}, \
  { "edev/#/di", emberAfServerEdevNDiUriHandler}, \
  { "rsps", emberAfServerRspsUriHandler}, \
  { "rsps/#", emberAfServerRspsNUriHandler}, \
  { "rsps/#/rsp", emberAfServerRspsNRspUriHandler}, \
  { "rsps/#/rsp/#", emberAfServerRspsNRspNUriHandler}, \
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
  { "edev/#/fsa", emberAfServerEdevNFsaUriHandler}, \
  { "edev/#/fsa/#", emberAfServerEdevNFsaNUriHandler}, \
  { "file", emberAfServerFileUriHandler}, \
  { "file/#", emberAfServerFileNUriHandler}, \
  { "shinyNewFirmware", emberAfServerShinyNewFirmwareUriHandler}, \
  { "edev/#/powerStatus", emberAfEdevNPowerStatusUriHandler}, \
  { NULL, NULL }


#endif // __EMBER_AF_URI_MAP_DEFINITIONS__
