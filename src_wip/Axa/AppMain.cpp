/**
 * @file AppMain.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Axa/AppMain.hpp"
#include <cstdio>

using namespace Axa;


extern void ProcessArguments(char **param_1);
extern byte FUN_140100a10(undefined8 param_1, char *str);
extern void __thiscall Axa::MyApp::FUN_140102ec0(MyApp *this, char *param_1);
extern void __thiscall Axa::MyApp::platformSpecific1(MyApp *this, char *param_1);
extern void __thiscall Axa::MyApp::setFilePath1(MyApp *this, char *FileName);
extern void __thiscall Axa::MyApp::setFilePath2(MyApp *this, char *FileName);
extern void UpdateStringPtrs(char *param_1, char *param_2, char *param_3, char *param_4);
extern void UpdateLocale(void);
extern int __thiscall Axa::MyApp::setSomeInteger(MyApp *this, int param_1);
extern void __thiscall OpenPKG(void *this, char *PKG_Name);
extern void __thiscall Axa::MyApp::concat1(MyApp *this, char *str);
extern void PreparePKG(char *Name);
extern void fnkh2Inport(char *param_1);
extern void fnkh2SoundInport(char *param_1, char param_2);
extern void fnkh2Converter_(char *param_1);
extern void EOS::CEpicOnlineServices::~CEpicOnlineServices(void);
extern void Axa::PackageFile::~PackageFile(void);
extern void __thiscall Axa::AppInterface::~AppInterface(AppInterface *this, undefined8 param_1, undefined8 param_2, undefined8 param_3);


const PackageLoadHeader PKG_HDRS_JAPAN[7] =
{
	{"image/jp/kh2_first",	0x1, 0x3E8, 0x64},
	{"image/jp/kh2_second",	0x1, 0x3E9, 0x64},
	{"image/jp/kh2_third",	0x1, 0x3EA, 0x64},
	{"image/jp/kh2_fourth",	0x1, 0x3EB, 0x64},
	{"image/jp/kh2_fifth",	0x1, 0x3EC, 0x64},
	{"image/jp/kh2_sixth",	0x1, 0x3ED, 0x64},
	{"image/SettingMenu",	0x0, 0x3EE, 0x64}
};

const PackageLoadHeader PKG_HDRS_OVERSEAS[7] =
{
	{"image/en/kh2_first",	0x1, 0x3E8, 0x64},
	{"image/en/kh2_second", 0x1, 0x3E9, 0x64},
	{"image/en/kh2_third",	0x1, 0x3EA, 0x64},
	{"image/en/kh2_fourth",	0x1, 0x3EB, 0x64},
	{"image/en/kh2_fifth",	0x1, 0x3EC, 0x64},
	{"image/en/kh2_sixth",	0x1, 0x3ED, 0x64},
	{"image/SettingMenu",	0x0, 0x3EE, 0x64}
};

AppInterface *PTR_APP_14079a5f0;
CFileMan *DAT_1408acf40; // I think?

const char s_C__hd28_kh2fmLanguageType_bin_1407133c0[] = "C:/hd28/kh2fmLanguageType.bin";
const char s_KINGDOM_HEARTS_HD_1_5_2_5_ReMIX__1407142c0[] = "KINGDOM HEARTS HD 1.5+2.5 ReMIX\\Epic Games Store\\KHIIFM.png";


	/* 0x14ccc0  8  axaAppMain */
// int __thiscall Axa::App::Main(void *this,char **argv)
int Axa::App::Main(void *_this, char **argv)
{
/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	undefined4 uVar1;
	undefined4 uVar2;
	undefined4 uVar3;
	undefined4 uVar4;
	undefined4 uVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	undefined4 uVar8;
	PackageLoadHeader *pPVar9;
	undefined4 *puVar10;
	byte bVar11;
	PackageLoadHeader *pPVar12;
	char *puVar13;
	undefined4 *puVar14;
	longlong lVar15;
	undefined8 uVar16;
	char *pcVar17;
	PackageLoadHeader *pPVar18;
	undefined8 uVar19;
	undefined auStack5760[32];
	Widget Widget;
	char PKG_Name[260];
	MyApp App;
	int iStack728;
	int iStack720;
	char str[128];
	ulonglong local_20;
	undefined8 uStack16;
	char *str_;

	/*		Stack cookie
    uStack16 = 0x14014ccd0;
    local_20 = DAT_140756f48 ^ (ulonglong)auStack5760;
	*/
	Axa::AppInterface::AppInterface((AppInterface *)&App);
	/* inlined constructor or destructor (approx location) for Axa::MyApp */
	App.AppInterface.vftablePtr = (AppInterface_vftable *)Axa::MyApp::vftable;
	Axa::WidgetBase::WidgetBase((WidgetBase *)&Widget);
	/* inlined constructor or destructor (approx location) for SettingMenu::Widget */
	Widget.WidgetBase.vftablePtr = (WidgetBase_vftable *)SettingMenu::Widget::vftable;
	Axa::MyApp::UpdateWidget(&App, &Widget);
	ProcessArguments(argv);
	bVar11 = FUN_140100a10(s_C__hd28_kh2fmLanguageType_bin_1407133c0, NULL);
	if ((byte)(bVar11 - 8) < 2)
	{
		pcVar17 = "C:/hd28/lata/";
		str_ = "http://172.20.1.67/webdav/KH25/lata/";
	}
	else
	{
		pcVar17 = "C:/hd28/juefigs/";
		str_ = "http://172.20.1.67/webdav/KH25/juefigs/";
	}
	Axa::MyApp::FUN_140102ec0(&App, str_);
	Axa::MyApp::platformSpecific1(&App, pcVar17);
	sprintf(str, "%sKH2Replace", (PTR_APP_14079a5f0->data).FileName2);
	Axa::MyApp::setFilePath1(&App, "KH2ReSource");
	Axa::MyApp::setFilePath2(&App, "KH2ReSource");
	str_ = str;
	UpdateStringPtrs(NULL, NULL, NULL, str_);
	UpdateLocale();
	Axa::MyApp::setSomeInteger(&App, 1);
	if ((bVar11 == 0) || (bVar11 == 7))
	{
		pPVar18 = PKG_HDRS_JAPAN;
		do
		{
			/* These are inline memcpy or std::copy */
			lVar15 = 2;
			puVar10 = (undefined4 *)PKG_Name;
			pPVar9 = pPVar18;
			do
			{
				pPVar12 = pPVar9;
				puVar13 = (char *)puVar10;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 4);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 8);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0xc);
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x10);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x14);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x18);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x1c);
				*(undefined4 *)puVar13 = *(undefined4 *)pPVar12->FilePath;
				*(undefined4 *)(puVar13 + 4) = uVar1;
				*(undefined4 *)(puVar13 + 8) = uVar2;
				*(undefined4 *)(puVar13 + 0xc) = uVar3;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x20);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x24);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x28);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x2c);
				*(undefined4 *)(puVar13 + 0x10) = uVar4;
				*(undefined4 *)(puVar13 + 0x14) = uVar5;
				*(undefined4 *)(puVar13 + 0x18) = uVar6;
				*(undefined4 *)(puVar13 + 0x1c) = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x30);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x34);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x38);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x3c);
				*(undefined4 *)(puVar13 + 0x20) = uVar1;
				*(undefined4 *)(puVar13 + 0x24) = uVar2;
				*(undefined4 *)(puVar13 + 0x28) = uVar3;
				*(undefined4 *)(puVar13 + 0x2c) = uVar8;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x40);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x44);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x48);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x4c);
				*(undefined4 *)(puVar13 + 0x30) = uVar4;
				*(undefined4 *)(puVar13 + 0x34) = uVar5;
				*(undefined4 *)(puVar13 + 0x38) = uVar6;
				*(undefined4 *)(puVar13 + 0x3c) = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x50);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x54);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x58);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x5c);
				*(undefined4 *)(puVar13 + 0x40) = uVar1;
				*(undefined4 *)(puVar13 + 0x44) = uVar2;
				*(undefined4 *)(puVar13 + 0x48) = uVar3;
				*(undefined4 *)(puVar13 + 0x4c) = uVar8;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x60);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 100);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x68);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x6c);
				*(undefined4 *)(puVar13 + 0x50) = uVar4;
				*(undefined4 *)(puVar13 + 0x54) = uVar5;
				*(undefined4 *)(puVar13 + 0x58) = uVar6;
				*(undefined4 *)(puVar13 + 0x5c) = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x70);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x74);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x78);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x7c);
				*(undefined4 *)(puVar13 + 0x60) = uVar1;
				*(undefined4 *)(puVar13 + 100) = uVar2;
				*(undefined4 *)(puVar13 + 0x68) = uVar3;
				*(undefined4 *)(puVar13 + 0x6c) = uVar8;
				*(undefined4 *)(puVar13 + 0x70) = uVar4;
				*(undefined4 *)(puVar13 + 0x74) = uVar5;
				*(undefined4 *)(puVar13 + 0x78) = uVar6;
				*(undefined4 *)(puVar13 + 0x7c) = uVar7;
				lVar15 += -1;
				puVar10 = (undefined4 *)(puVar13 + 0x80);
				pPVar9 = (PackageLoadHeader *)(pPVar12->FilePath + 0x80);
			} while (lVar15 != 0);
			uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x84);
			uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x88);
			uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x8c);
			*(undefined4 *)(puVar13 + 0x80) = *(undefined4 *)((PackageLoadHeader *)(pPVar12->FilePath + 0x80))->FilePath;
			*(undefined4 *)(puVar13 + 0x84) = uVar1;
			*(undefined4 *)(puVar13 + 0x88) = uVar2;
			*(undefined4 *)(puVar13 + 0x8c) = uVar3;
			OpenPKG(DAT_1408acf40, PKG_Name);
			pPVar18 = pPVar18 + 1;
		} while (pPVar18 != PKG_HDRS_OVERSEAS);
	}
	else
	{
		pPVar18 = PKG_HDRS_OVERSEAS;
		do
		{
			lVar15 = 2;
			pPVar9 = pPVar18;
			puVar10 = (undefined4 *)PKG_Name;
			do
			{
				puVar14 = puVar10;
				pPVar12 = pPVar9;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 4);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 8);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0xc);
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x10);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x14);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x18);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x1c);
				*puVar14 = *(undefined4 *)pPVar12->FilePath;
				puVar14[1] = uVar1;
				puVar14[2] = uVar2;
				puVar14[3] = uVar3;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x20);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x24);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x28);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x2c);
				puVar14[4] = uVar4;
				puVar14[5] = uVar5;
				puVar14[6] = uVar6;
				puVar14[7] = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x30);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x34);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x38);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x3c);
				puVar14[8] = uVar1;
				puVar14[9] = uVar2;
				puVar14[10] = uVar3;
				puVar14[0xb] = uVar8;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x40);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x44);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x48);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x4c);
				puVar14[0xc] = uVar4;
				puVar14[0xd] = uVar5;
				puVar14[0xe] = uVar6;
				puVar14[0xf] = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x50);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x54);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x58);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x5c);
				puVar14[0x10] = uVar1;
				puVar14[0x11] = uVar2;
				puVar14[0x12] = uVar3;
				puVar14[0x13] = uVar8;
				uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x60);
				uVar2 = *(undefined4 *)(pPVar12->FilePath + 100);
				uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x68);
				uVar8 = *(undefined4 *)(pPVar12->FilePath + 0x6c);
				puVar14[0x14] = uVar4;
				puVar14[0x15] = uVar5;
				puVar14[0x16] = uVar6;
				puVar14[0x17] = uVar7;
				uVar4 = *(undefined4 *)(pPVar12->FilePath + 0x70);
				uVar5 = *(undefined4 *)(pPVar12->FilePath + 0x74);
				uVar6 = *(undefined4 *)(pPVar12->FilePath + 0x78);
				uVar7 = *(undefined4 *)(pPVar12->FilePath + 0x7c);
				puVar14[0x18] = uVar1;
				puVar14[0x19] = uVar2;
				puVar14[0x1a] = uVar3;
				puVar14[0x1b] = uVar8;
				puVar14[0x1c] = uVar4;
				puVar14[0x1d] = uVar5;
				puVar14[0x1e] = uVar6;
				puVar14[0x1f] = uVar7;
				lVar15 += -1;
				pPVar9 = (PackageLoadHeader *)(pPVar12->FilePath + 0x80);
				puVar10 = puVar14 + 0x20;
			} while (lVar15 != 0);
			uVar1 = *(undefined4 *)(pPVar12->FilePath + 0x84);
			uVar2 = *(undefined4 *)(pPVar12->FilePath + 0x88);
			uVar3 = *(undefined4 *)(pPVar12->FilePath + 0x8c);
			puVar14[0x20] = *(undefined4 *)((PackageLoadHeader *)(pPVar12->FilePath + 0x80))->FilePath;
			puVar14[0x21] = uVar1;
			puVar14[0x22] = uVar2;
			puVar14[0x23] = uVar3;
			OpenPKG(DAT_1408acf40, PKG_Name);
			pPVar18 = pPVar18 + 1;
		} while (pPVar18 != (PackageLoadHeader *)s_KINGDOM_HEARTS_HD_1_5_2_5_ReMIX__1407142c0);
	}
	Axa::MyApp::concat1(&App, "KH2Replace");
	PreparePKG(NULL);
	fnkh2Inport(NULL);
	uVar19 = 0;
	uVar16 = 0;
	fnkh2SoundInport(NULL, '\0');
	fnkh2Converter_(NULL);
	EOS::CEpicOnlineServices::~CEpicOnlineServices();
	if (-1 < iStack720)
	{
		iStack728 = iStack720;
	}
	Axa::PackageFile::~PackageFile();
	/* inlined constructor or destructor (approx location) for Axa::WidgetBase */
	Widget.WidgetBase.vftablePtr = (WidgetBase_vftable *)Axa::WidgetBase::vftable;
	Axa::AppInterface::~AppInterface((AppInterface *)&App, uVar16, uVar19, str_);
	return iStack728;
}
