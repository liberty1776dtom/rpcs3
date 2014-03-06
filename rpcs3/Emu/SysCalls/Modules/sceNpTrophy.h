#pragma once
#include "cellRtc.h"

enum
{
	SCE_NP_TROPHY_ERROR_ALREADY_INITIALIZED      = 0x80022901,
	SCE_NP_TROPHY_ERROR_NOT_INITIALIZED          = 0x80022902,
	SCE_NP_TROPHY_ERROR_NOT_SUPPORTED            = 0x80022903,
	SCE_NP_TROPHY_ERROR_CONTEXT_NOT_REGISTERED   = 0x80022904,
	SCE_NP_TROPHY_ERROR_OUT_OF_MEMORY            = 0x80022905,
	SCE_NP_TROPHY_ERROR_INVALID_ARGUMENT         = 0x80022906,
	SCE_NP_TROPHY_ERROR_EXCEEDS_MAX              = 0x80022907,
	SCE_NP_TROPHY_ERROR_INSUFFICIENT             = 0x80022909,
	SCE_NP_TROPHY_ERROR_UNKNOWN_CONTEXT          = 0x8002290a,
	SCE_NP_TROPHY_ERROR_INVALID_FORMAT           = 0x8002290b,
	SCE_NP_TROPHY_ERROR_BAD_RESPONSE             = 0x8002290c,
	SCE_NP_TROPHY_ERROR_INVALID_GRADE            = 0x8002290d,
	SCE_NP_TROPHY_ERROR_INVALID_CONTEXT          = 0x8002290e,
	SCE_NP_TROPHY_ERROR_PROCESSING_ABORTED       = 0x8002290f,
	SCE_NP_TROPHY_ERROR_ABORT                    = 0x80022910,
	SCE_NP_TROPHY_ERROR_UNKNOWN_HANDLE           = 0x80022911,
	SCE_NP_TROPHY_ERROR_LOCKED                   = 0x80022912,
	SCE_NP_TROPHY_ERROR_HIDDEN                   = 0x80022913,
	SCE_NP_TROPHY_ERROR_CANNOT_UNLOCK_PLATINUM   = 0x80022914,
	SCE_NP_TROPHY_ERROR_ALREADY_UNLOCKED         = 0x80022915,
	SCE_NP_TROPHY_ERROR_INVALID_TYPE             = 0x80022916,
	SCE_NP_TROPHY_ERROR_INVALID_HANDLE           = 0x80022917,
	SCE_NP_TROPHY_ERROR_INVALID_NP_COMM_ID       = 0x80022918,
	SCE_NP_TROPHY_ERROR_UNKNOWN_NP_COMM_ID       = 0x80022919,
	SCE_NP_TROPHY_ERROR_DISC_IO                  = 0x8002291a,
	SCE_NP_TROPHY_ERROR_CONF_DOES_NOT_EXIST      = 0x8002291b,
	SCE_NP_TROPHY_ERROR_UNSUPPORTED_FORMAT       = 0x8002291c,
	SCE_NP_TROPHY_ERROR_ALREADY_INSTALLED        = 0x8002291d,
	SCE_NP_TROPHY_ERROR_BROKEN_DATA              = 0x8002291e,
	SCE_NP_TROPHY_ERROR_VERIFICATION_FAILURE     = 0x8002291f,
	SCE_NP_TROPHY_ERROR_INVALID_TROPHY_ID        = 0x80022920,
	SCE_NP_TROPHY_ERROR_UNKNOWN_TROPHY_ID        = 0x80022921,
	SCE_NP_TROPHY_ERROR_UNKNOWN_TITLE            = 0x80022922,
	SCE_NP_TROPHY_ERROR_UNKNOWN_FILE             = 0x80022923,
	SCE_NP_TROPHY_ERROR_DISC_NOT_MOUNTED         = 0x80022924,
	SCE_NP_TROPHY_ERROR_SHUTDOWN                 = 0x80022925,
	SCE_NP_TROPHY_ERROR_TITLE_ICON_NOT_FOUND     = 0x80022926,
	SCE_NP_TROPHY_ERROR_TROPHY_ICON_NOT_FOUND    = 0x80022927,
	SCE_NP_TROPHY_ERROR_INSUFFICIENT_DISK_SPACE  = 0x80022928,
	SCE_NP_TROPHY_ERROR_ILLEGAL_UPDATE           = 0x8002292a,
	SCE_NP_TROPHY_ERROR_SAVEDATA_USER_DOES_NOT_MATCH = 0x8002292b,
	SCE_NP_TROPHY_ERROR_TROPHY_ID_DOES_NOT_EXIST = 0x8002292c,
	SCE_NP_TROPHY_ERROR_SERVICE_UNAVAILABLE      = 0x8002292d,
	SCE_NP_TROPHY_ERROR_UNKNOWN                  = 0x800229ff,
};

enum
{
	SCE_NP_TROPHY_TITLE_MAX_SIZE       = 128,
	SCE_NP_TROPHY_GAME_DESCR_MAX_SIZE  = 1024,
	SCE_NP_TROPHY_NAME_MAX_SIZE        = 128,
	SCE_NP_TROPHY_DESCR_MAX_SIZE       = 1024,
};

enum
{
	SCE_NP_TROPHY_GRADE_UNKNOWN        = 0,
	SCE_NP_TROPHY_GRADE_PLATINUM       = 1,
	SCE_NP_TROPHY_GRADE_GOLD           = 2,
	SCE_NP_TROPHY_GRADE_SILVER         = 3,
	SCE_NP_TROPHY_GRADE_BRONZE         = 4,
};

struct SceNpTrophyDetails
{
	s32 trophyId;     // SceNpTrophyId
	u32 trophyGrade;  // SceNpTrophyGrade
	u8 name[SCE_NP_TROPHY_NAME_MAX_SIZE];
	u8 description[SCE_NP_TROPHY_DESCR_MAX_SIZE];
	bool hidden;
	u8 reserved[3];
};

struct SceNpTrophyData {
	CellRtcTick timestamp;
	s32 trophyId;     // SceNpTrophyId
	bool unlocked;
	u8 reserved[3];
};
