// taken from new-hbmenu (by hbmenu team)

#include "language.h"

#define STR_JP(_str) [CFG_LANGUAGE_JP] = _str
#define STR_EN(_str) [CFG_LANGUAGE_EN] = _str
#define STR_FR(_str) [CFG_LANGUAGE_FR] = _str
#define STR_DE(_str) [CFG_LANGUAGE_DE] = _str
#define STR_IT(_str) [CFG_LANGUAGE_IT] = _str
#define STR_ES(_str) [CFG_LANGUAGE_ES] = _str
#define STR_ZH(_str) [CFG_LANGUAGE_ZH] = _str
#define STR_KO(_str) [CFG_LANGUAGE_KO] = _str
#define STR_NL(_str) [CFG_LANGUAGE_NL] = _str
#define STR_PT(_str) [CFG_LANGUAGE_PT] = _str
#define STR_RU(_str) [CFG_LANGUAGE_RU] = _str
#define STR_TW(_str) [CFG_LANGUAGE_TW] = _str

const char* const g_strings[StrId_Max][16] =
{
	[StrId_NewPin] =
	{	
    STR_EN("Enter a new PIN using ABXY and the DPad"),
		STR_ES("Spanish"),
		STR_DE("German"),
		STR_FR("French"),
		STR_IT("Italian"),
		STR_JP("Japanese"),
		STR_PT("Portuguese"),
		STR_NL("Dutch"),
		STR_KO("Korean"),
		STR_RU("Russian"),
		STR_ZH("Chinese"),
		STR_TW("Taiwanese"),
		),
	},
};
