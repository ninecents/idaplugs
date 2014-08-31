
#ifndef _fmtr_res_h_included_
#define _fmtr_res_h_included_ 1

#define NOMINMAX 1
#ifndef _MSC_VER
#include <WinResrc.h>
#else // _MSC_VER
#include <Windows.h>
#endif // !_MSC_VER
#include <commctrl.h>
#include <Richedit.h>

#define USE_VS_VERSION_INFO 1 // attach a VS_VERSION_INFO to plugins

#define IDABOUT                       11
#define IDRESDECOPTS                  12
#define IDBROWSE                      13
#define IDCSCOPTS                     14
#define IDMFCOPTS                     15
#define IDOFFOPTS                     16
#define IDKILLRDB                     17
#define IDFUNCBOUNDOPTS               18
#define IDPACKDATAPREFS               19
#define IDADD                         20
#define IDREMOVE                      21
#define IDVCLOPTS                     22
#define IDSAYVCLVER                   23
#define IDEDITGROUPS                  24
#define IDADDGROUP                    25

#define IDC_STATIC                  (-1)
#define IDC_SEGINFOBOX              5001
#define IDC_AUTOGENBOX              5002
#define IDC_DEMANGLEDBOX            5003
#define IDC_CMTBOX                  5004
#define IDC_DBG_SAVE_VALUES         5005
#define IDC_CSCLIBSBOX              5006
#define IDC_GENMAPEXBOX             5007
#define IDC_COMMONBATCHBOX          5008
#define IDC_FINDOFFSETSBOX          5010
#define IDC_SCANFUNCTIONSBOX        5011
#define IDC_FINDBPFRAMESBOX         5012
#define IDC_PURGEFAKENAMESBOX       5013
#define IDC_FORMATDATA              5014
#define IDC_APPLYSIGNESSBOX         5015
#define IDC_FINDLSTRINGSBOX         5016
#define IDC_FINDPSTRINGSBOX         5017
#define IDC_MERGEEHANDLERSBOX       5018
#define IDC_SETFUNCENDBOX           5019
#define IDC_LTHRESHOLD              5021
#define IDC_PTHRESHOLD              5022
#define IDC_RESDEC                  5023
#define IDC_MFCTOOL                 5024
#define IDC_OVERWRITE               5025
#define IDC_APPEND                  5026
#define IDC_PRESERVE                5027
#define IDC_LORES                   5028
#define IDC_STRINGS                 5029
#define IDC_MENUS                   5030
#define IDC_DIALOGS                 5031
#define IDC_WIPEOUT                 5032
#define IDC_EXTFILTER               5033
#define IDC_FLTCOMMAND              5034
#define IDC_ACCELERATORS            5035
#define IDC_NOCAPTION               5036
#define IDC_FORCERENAME             5037
#define IDC_RENAMELIBS              5038
#define IDC_CREATEFUNCS             5039
#define IDC_GDI                     5040
#define IDC_OTHER                   5041
#define IDC_OBEYDWORD               5042
#define IDC_MAPCONV2                5043
#define IDC_BROWSELIBFUNCS          5044
#define IDC_MAKERESLIST             5045
#define IDC_PACKUSERDATA            5046
#define IDC_DETECTBITMASKS          5047
#define IDC_STATICS                 5048
#define IDC_MFCSTATICS              5049
#define IDC_KILLNAMES               5050
#define IDC_KILLCOMMENTS            5051
#define IDC_KILLRPTCOMMENTS         5052
#define IDC_KILLFUNCS               5053
#define IDC_KILLXREFSFROM           5054
#define IDC_KILLXREFSTO             5055
#define IDC_KILLSTRUCTS             5056
#define IDC_KILLENUMS               5057
#define IDC_CSC_CODE2DATA           5058
#define IDC_CSC_DATA2DATA           5059
#define IDC_CSC_CODE2CODE           5060
#define IDC_CSC_DATA2CODE           5061
#define IDC_OFFTOHEAD               5062
#define IDC_CREATEOFFSETS           5063
#define IDC_OFFATDWORD              5064
#define IDC_CREFS                   5065
#define IDC_DREFS                   5066
#define IDC_CSCIMPORTS              5067
#define IDC_AUTOREBUILD             5068
#define IDC_OBEYHEAD                5069
#define IDC_FINDDOUBTULFUNC         5070
#define IDC_REPORTONLY              5071
#define IDC_REFRTI                  5072
#define IDC_CMTRTI                  5073
#define IDC_EAX                     5074
#define IDC_ECX                     5075
#define IDC_EDX                     5076
#define IDC_EBX                     5077
#define IDC_ESP                     5078
#define IDC_EBP                     5079
#define IDC_ESI                     5080
#define IDC_EDI                     5081
#define IDC_TRACELOG                5082
#define IDC_IMGBASE                 5083
#define IDC_MAKEALIGNS              5084
#define IDC_DESTROYSTRUCTS          5085
#define IDC_FINDBADOFFSETS          5086
#define IDC_LOCBOX                  5087
#define IDC_ENUMBOX                 5088
#define IDC_STROFFBOX               5089
#define IDC_STKVARBOX               5090
#define IDC_FOPBOX                  5091
#define IDC_REGVARBOX               5092
#define IDC_MFCEXTERNS              5093
#define IDC_MFCMAKECODE             5094
#define IDC_CSCHIDDEN               5095
#define IDC_NAMEPTR2PTR             5096
#define IDC_LANGPICKER              5097
#define IDC_OBEYDEFHEAD             5098
#define IDC_USERLIBS                5099
#define IDC_FUNCTIONS               5100
#define IDC_VARS                    5101
#define IDC_ALL                     5102
#define IDC_COLLAPSEMATCHING        5103
#define IDC_FIXMANGLING             5104
#define IDC_DBG_RESOLVE_RTA         5105
#define IDC_CIRCULRESOLV            5106
#define IDC_KEEPINITDATA            5107
#define IDC_EXTERNDEFS              5108
#define IDC_ANCHORSTROFFS           5109
#define IDC_RESOLVENAMES            5110
#define IDC_EXPLOREHEAPS            5111
#define IDC_RELOCXTRNFUNC           5112
#define IDC_RELOCXTRNVAR            5113
#define IDC_SUDDENDEATH             5114
#define IDC_APPLYVCLOBJECTS         5115
#define IDC_VERSIONTEXT             5116
#define IDC_CASELESS                5117
#define IDC_IGNORESECTION           5118
#define IDC_VCLPACKAGES             5119
#define IDC_NONE                    5120
#define IDC_KEEPLIBNAMES            5121
#define IDC_OFFTOSTAT               5122
#define IDC_OFFTODYN                5123
#define IDC_CARENAMES               5124
#define IDC_CAREREFS                5125
#define IDC_CAREFUNCS               5126
#define IDC_MAXOFFSETABLE           5127
#define IDC_MAXCLONABLE             5128
#define IDC_ENABLEVALLOC            5129
#define IDC_MINVALLOCBLK            5130
#define IDC_MAXRECURSION            5131
#define IDC_HONOUROFFSETS           5132
#define IDC_MAX_RANGES              5133
#define IDC_MAXRUNTIME              5134
#define IDC_DONT_SHOW_RTR_NAG       5135
#define IDC_DONT_SHOW_DUMPER_NAG    5136
#define IDC_INCLUDE_TYPEDEFS        5137
#define IDC_ASM_MODEL               5138
#define IDC_QUIET                   5139
#define IDC_VERBOSE                 5140
#define IDC_UPDOWN1                 5141
#define IDC_TABCTL                  5142
#define IDC_UPDOWN2                 5143
#define IDC_UPDOWN3                 5144
#define IDC_UPDOWN4                 5145
#define IDC_UPDOWN5                 5146
#define IDC_UPDOWN6                 5147
#define IDC_VERBOSITY               5148
#define IDC_ASMMODEL                5149
#define IDC_TYPEDEFS                5150
#define IDC_STATIC1                 5151
#define IDC_STATIC2                 5152
#define IDC_STATIC3                 5153
#define IDC_STATIC4                 5154
#define IDC_STATIC5                 5155
#define IDC_STATIC6                 5156
#define IDC_STATIC7                 5157
#define IDC_STATIC8                 5158
#define IDC_STATIC9                 5159
#define IDC_DENOTEUSRMSG            5160
#define IDC_FIXSTKVARSBOX           5161
#define IDC_OFFBOUNDARY             5162
#define IDC_UNATTENDED              5163
#define IDC_UNNAMENOMATCH           5164
#define IDC_SHOWALL                 5165
#define IDC_LOWORD                  5166
#define IDC_GROUPVWR                5167
#define IDC_FINDSTROFFSBOX          5168
#define IDC_FASTMATCH               5169
#define IDC_MFCAPPLYTYPE            5170
#define IDC_ALLSEGS                 5171
#define IDC_MAPIMPSDIR              5172
#define IDC_CREATEGRAPH             5173

#define IDC_LABEL1                 15001
#define IDC_LABEL2                 15002
#define IDC_LABELL                 15003
#define IDC_LABELP                 15004

#define IDD_MAPOPTS                20001
#define IDD_STARTUP                20002
#define IDD_ABOUT                  20003
#define IDD_RESDEC                 20004
#define IDD_CSC                    20005
#define IDD_MFCTOOL                20006
#define IDD_FINDOFFSETS            20007
#define IDD_MASSKILLER             20008
#define IDD_FINDDOUBTFULFUNCSOPTS  20009
#define IDD_RUNTIMEIMPORT          20010
#define IDD_PACKDATAPREFS          20011
#define IDD_IDABIZY                20012
#define IDD_LNM                    20013
#define IDD_VCLPARSER              20014
#define IDD_CSC_TAB1               20015
#define IDD_CSC_TAB2               20016
#define IDD_GROUPMGR               20017

#define IDS_ABOUTSPLASH            35001

#define IDB_ABOUTSPLASH            40001

#define IDR_SOUNDFX                45001

#define IDF_CALIGRAPHIC            50001

#define IDP_FMTIDASRC              60001
#define IDP_DIR                    60002
#define IDP_FTIME                  60003

#endif // _fmtr_res_h_included_