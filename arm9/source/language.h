#pragma once
#include <3ds.h>

typedef enum
{
	StrId_NewPin,

	StrId_Max,
} StrId;

extern const char* const g_strings[StrId_Max][16];
