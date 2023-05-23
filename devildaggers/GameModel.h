#pragma once

#define HERO_PTR_ADDRESS 0x258BA8;


#include <windows.h>
#include <iostream>

template <class T>
class GameDataStructure
{
public:
	static T* init(const intptr_t addr)
	{
		return *reinterpret_cast<T**>(addr);
	}
};

#pragma pack(push, 4) //"pack" is used to fix wrong offsets
class Hero : public GameDataStructure<Hero>
{
public:
	char pad_0000[20]; //0x0000
	char sPlayerName1[32]; //0x0014
	float fSeconds; //0x0034
	int32_t iGems; //0x0038
	char pad_003C[16]; //0x003C
	int64_t iGems2; //0x004C
	char pad_0054[8]; //0x0054
	int64_t iKilledEnemies; //0x005C
	int16_t iCounter_skull_1; //0x0064
	int16_t iCounter_skull_2;
	int16_t iCounter_skull_3;
	int16_t iCounter_spiderling;
	char pad_006C[68]; //0x006C
	char sPlayerName2[32]; //0x00B0
	char pad_00D0[224 + 24]; //0x00D0
	char sPlayerName3[32];
	char pad_01D0[88];
	char sGameVersion[8];
	char pad_0230[32];
	char sLevelName[8];
	char pad_0258[64];
	bool bTopDownCamera;
	char pad_0299[47];
	float fPickedUpGemTimer_maybe;
	char pad_02CC[32 - 24]; // padding guess, not sure. both level name and sky light work like this.
	float fSkyLight;
	char pad_02F0[44];
	float fTimeSinceSceneStart_unscaled;
	char pad_0320[12];
	float fTimeSinceSceneStart_scaled;
	bool bAlive;
	char pad_0331[3];
	int32_t iGems3;
	char pad_0338[88];
	int32_t iCounterEnemiesAndSpawners;
	int32_t iCounter_skull_1_HUGE_PEAK_BUG_2;
	char pad_0398[36];
	float fTilesShrinkTime;
	char pad_03C0[32];
	char sLevelName_2[8];
	char pad_03E8[128];
	int8_t iRenderParticlesEditor;
	int8_t iRenderLevelEditor;
	int8_t iRenderLevelDesc_notWorking;
	char pad_046B[21];
	char sLeaderboardFirstUsername[32];
	char sLeaderboardSecondUsername[32];
	class unk_leaderboardEntry *pLeaderboardStuff;
	char pad_04C8[804];
	float fCamX;
	float fCamY;
	float fCamZ;
	char pad_07F8[112];
};


class unk_leaderboardEntry_2
{
public:
	char sUsername[32]; //0x0000
}; //Size: 0x0020

class unk_leaderboardEntry
{
public:
	char sUsername[32]; //0x0000
}; //Size: 0x0020

class DownloadMessage
{
public:
	char message[32]; //0x0000
}; //Size: 0x0020

class SteamStuff
{
public:
	char sSteamUserID[17]; //0x0000
}; //Size: 0x0011


#pragma pack(pop)//"pack" is used to fix wrong offsets
