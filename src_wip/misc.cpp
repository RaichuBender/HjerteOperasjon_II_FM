/**
 * @file misc.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "common.hpp"

/**
 * @brief Get the parameter from argv
 * 
 * @param Param 
 * @return char* 
 */
char *GetFromCmdLn(char *Param)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	/* WARNING: Type propagation algorithm not settling */
	ulonglong uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	int iVar5;
	undefined8 *puVar6;
	undefined8 *puVar7;
	undefined *puVar8;
	undefined8 *puVar9;
	longlong *plVar10;
	ulonglong uVar11;
	undefined8 *puVar12;
	undefined auStack120[32];
	undefined8 local_58;
	ulonglong local_48;
	ulonglong local_40;
	ulonglong local_38;

	local_38 = DAT_140756f48 ^ (ulonglong)auStack120;
	plVar10 = (longlong *)0xffffffffffffffff;
	local_48 = 0;
	local_40 = 0xf;
	local_58._0_1_ = 0;
	do
	{
		plVar10 = (longlong *)((longlong)plVar10 + 1);
	} while (Param[(longlong)plVar10] != '\0');
	FUN_1400ff400((longlong **)&local_58, Param, plVar10);
	uVar4 = local_40;
	uVar3 = local_48;
	puVar12 = DAT_14079a5c0;
	puVar2 = (undefined *)CONCAT71(local_58._1_7_, (undefined)local_58);
	puVar6 = (undefined8 *)DAT_14079a5c0[1];
	puVar9 = DAT_14079a5c0;
	if (*(char *)((longlong)puVar6 + 0x19) == '\0')
	{
		do
		{
			puVar7 = puVar6 + 4;
			puVar8 = (undefined *)&local_58;
			if (0xf < uVar4)
			{
				puVar8 = puVar2;
			}
			if (0xf < (ulonglong)puVar6[7])
			{
				puVar7 = (undefined8 *)puVar6[4];
			}
			uVar1 = puVar6[6];
			uVar11 = uVar1;
			if (uVar3 < uVar1)
			{
				uVar11 = uVar3;
			}
			iVar5 = memcmp(puVar7, puVar8, uVar11);
			if (iVar5 == 0)
			{
				if (uVar1 < uVar3)
					goto LAB_1400ffd4d;
			LAB_1400ffcf8:
				puVar7 = (undefined8 *)*puVar6;
				puVar9 = puVar6;
			}
			else
			{
				if (-1 < iVar5)
					goto LAB_1400ffcf8;
			LAB_1400ffd4d:
				puVar7 = (undefined8 *)puVar6[2];
			}
			puVar6 = puVar7;
		} while (*(char *)((longlong)puVar7 + 0x19) == '\0');
		if (puVar9 != puVar12)
		{
			puVar6 = puVar9 + 4;
			if (0xf < (ulonglong)puVar9[7])
			{
				puVar6 = (undefined8 *)puVar9[4];
			}
			uVar1 = puVar9[6];
			puVar8 = (undefined *)&local_58;
			if (0xf < uVar4)
			{
				puVar8 = puVar2;
			}
			uVar11 = uVar3;
			if (uVar1 < uVar3)
			{
				uVar11 = uVar1;
			}
			iVar5 = memcmp(puVar8, puVar6, uVar11);
			if (iVar5 == 0)
			{
				if (uVar1 <= uVar3)
					goto LAB_1400ffd58;
			}
			else if (-1 < iVar5)
				goto LAB_1400ffd58;
		}
	}
	puVar9 = puVar12;
LAB_1400ffd58:
	if (0xf < uVar4)
	{
		if ((0xfff < uVar4 + 1) && ((undefined *)0x1f < puVar2 + (-8 - *(longlong *)(puVar2 + 0xfffffffffffffff8))))
		{
			/* WARNING: Subroutine does not return */
			_invalid_parameter_noinfo_noreturn();
		}
		delete ();
		puVar12 = DAT_14079a5c0;
	}
	if (puVar12 == puVar9)
	{
		puVar6 = NULL;
	}
	else
	{
		puVar6 = puVar9 + 8;
		if (0xf < (ulonglong)puVar9[0xb])
		{
			puVar6 = (undefined8 *)*puVar6;
		}
	}
	return (char *)puVar6;
}

void __thiscall Axa::MyApp::UpdateWidget(MyApp *this, Widget *rWidget)
{
	(this->AppInterface).data.Widget = rWidget;
	(rWidget->WidgetBase).data.ParentApp = this;
	return;
}

/**
 * @brief 
 * 
 * @param param_1 
 */
void ProcessArguments(char **param_1)
{
	char *_Str;
	longlong *plVar1;
	char *pcVar2;
	void *pvVar3;
	longlong lVar4;
	uint uVar5;
	longlong lVar6;
	size_t _Size;
	ulonglong _Size_00;

	plVar1 = DAT_14079a5c0;
	FUN_140100890(&DAT_14079a5c0, (longlong *)DAT_14079a5c0[1]);
	DAT_14079a5c0[1] = (longlong)plVar1;
	*DAT_14079a5c0 = (longlong)plVar1;
	DAT_14079a5c0[2] = (longlong)plVar1;
	DAT_14079a5c8 = 0;
	DAT_14079a530 = 0;
	memset(null_ARRAY_14079a540, 0, 0x80);
	_Str = *param_1;
	pcVar2 = strstr(_Str, " ");
	while (pcVar2 != NULL)
	{
		if ((pcVar2 != NULL) && (uVar5 = ((int)pcVar2 - (int)_Str) + 0xfU & 0xfffffff0, uVar5 != 0))
		{
			_Size = SEXT48((int)(uVar5 + 0x10));
			pvVar3 = (void *)new[](_Size);
			null_ARRAY_14079a540[DAT_14079a530] = pvVar3;
			memset(pvVar3, 0, _Size);
			strncpy_s((char *)null_ARRAY_14079a540[DAT_14079a530], _Size, _Str, (longlong)pcVar2 - (longlong)_Str);
			FUN_140101010((char *)null_ARRAY_14079a540[DAT_14079a530]);
			DAT_14079a530 += 1;
		}
		_Str = pcVar2 + 1;
		pcVar2 = strstr(_Str, " ");
	}
	lVar4 = -1;
	lVar6 = -1;
	do
	{
		lVar6 += 1;
	} while (_Str[lVar6] != '\0');
	if (lVar6 != 0)
	{
		do
		{
			lVar4 += 1;
		} while (_Str[lVar4] != '\0');
		_Size_00 = (longlong)((int)lVar4 + 0xf) & 0xfffffffffffffff0;
		pvVar3 = (void *)new[](_Size_00);
		null_ARRAY_14079a540[DAT_14079a530] = pvVar3;
		memset(pvVar3, 0, _Size_00);
		strcpy_s((char *)null_ARRAY_14079a540[DAT_14079a530], _Size_00, _Str);
		FUN_140101010((char *)null_ARRAY_14079a540[DAT_14079a530]);
		DAT_14079a530 += 1;
	}
	return;
}

/**
 * @brief 
 * 
 * @param param_1 
 * @param str 
 * @return byte 
 */
byte FUN_140100a10(undefined8 param_1, char *str)
{
	char *localeStr;
	char *locale;
	char *french;
	char *italian;
	char *german;

	localeStr = GetFromCmdLn("-epiclocale");
	locale = strstr(localeStr, "en");
	if (locale == NULL)
	{
		french = strstr(localeStr, "fr");
		if (french != NULL)
		{
			if (str != NULL)
			{
				*(undefined4 *)str = 4;
			}
			return 4;
		}
		italian = strstr(localeStr, "it");
		if (italian != NULL)
		{
			if (str != NULL)
			{
				*(undefined4 *)str = 6;
			}
			return 6;
		}
		german = strstr(localeStr, "de");
		if (german != NULL)
		{
			if (str != NULL)
			{
				*(undefined4 *)str = 3;
			}
			return 3;
		}
		localeStr = strstr(localeStr, "es");
		if (localeStr != NULL)
		{
			if (str != NULL)
			{
				*(undefined4 *)str = 5;
			}
			return 5;
		}
	}
	if (str != NULL)
	{
		*(undefined4 *)str = 1;
	}
	return 1;
}

void __thiscall Axa::MyApp::FUN_140102ec0(MyApp *this, char *param_1)
{
	char *pcVar1;
	char cVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	longlong lVar5;
	longlong lVar6;

	pcVar1 = (this->AppInterface).data.FileName2;
	memset(pcVar1, 0, 0x200);
	strncpy(pcVar1, param_1, 26);
	if (DAT_1408acf4c == 0)
	{
		/* Index 0x458 - 1 (because of compiler optimized shenanigans) */
		puVar3 = (undefined4 *)&(this->AppInterface).data.field_0x457;
		do
		{
			puVar4 = puVar3;
			puVar3 = (undefined4 *)((longlong)puVar4 + 1);
		} while (*(char *)((longlong)puVar4 + 1) != '\0');
		lVar6 = &(this->AppInterface).data.field_0x457;
		*(undefined4 *)((longlong)puVar4 + 1) = 0x43495045;
		*(undefined2 *)((longlong)puVar4 + 5) = 0x2f;
		do
		{
			pcVar1 = (char *)(lVar6 + 1);
			lVar6 += 1;
		} while (*pcVar1 != '\0');
		lVar5 = 0;
		do
		{
			cVar2 = param_1[lVar5 + 26];
			*(char *)(lVar6 + lVar5) = cVar2;
			lVar5 += 1;
		} while (cVar2 != '\0');
	}
	else
	{
		if (DAT_1408acf4c == 1)
		{
			puVar3 = (undefined4 *)&(this->AppInterface).data.field_0x457;
			do
			{
				puVar4 = puVar3;
				puVar3 = (undefined4 *)((longlong)puVar4 + 1);
			} while (*(char *)((longlong)puVar4 + 1) != '\0');
			lVar6 = &(this->AppInterface).data.field_0x457;
			*(undefined4 *)((longlong)puVar4 + 1) = 0x2f345350;
			*(undefined *)((longlong)puVar4 + 5) = 0;
			do
			{
				pcVar1 = (char *)(lVar6 + 1);
				lVar6 += 1;
			} while (*pcVar1 != '\0');
			lVar5 = 0;
			do
			{
				cVar2 = param_1[lVar5 + 0x1a];
				*(char *)(lVar6 + lVar5) = cVar2;
				lVar5 += 1;
			} while (cVar2 != '\0');
			return;
		}
		if (DAT_1408acf4c == 2)
		{
			puVar3 = (undefined4 *)&(this->AppInterface).data.field_0x457;
			do
			{
				puVar4 = puVar3;
				puVar3 = (undefined4 *)((longlong)puVar4 + 1);
			} while (*(char *)((longlong)puVar4 + 1) != '\0');
			lVar6 = &(this->AppInterface).data.field_0x457;
			*(undefined4 *)((longlong)puVar4 + 1) = 0x2f314258;
			*(undefined *)((longlong)puVar4 + 5) = 0;
			do
			{
				pcVar1 = (char *)(lVar6 + 1);
				lVar6 += 1;
			} while (*pcVar1 != '\0');
			lVar5 = 0;
			do
			{
				cVar2 = param_1[lVar5 + 0x1a];
				*(char *)(lVar6 + lVar5) = cVar2;
				lVar5 += 1;
			} while (cVar2 != '\0');
			return;
		}
		if (DAT_1408acf4c == 3)
		{
			puVar3 = (undefined4 *)&(this->AppInterface).data.field_0x457;
			do
			{
				puVar4 = puVar3;
				puVar3 = (undefined4 *)((longlong)puVar4 + 1);
			} while (*(char *)((longlong)puVar4 + 1) != '\0');
			lVar6 = &(this->AppInterface).data.field_0x457;
			*(undefined4 *)((longlong)puVar4 + 1) = 0x2f504747;
			*(undefined *)((longlong)puVar4 + 5) = 0;
			do
			{
				pcVar1 = (char *)(lVar6 + 1);
				lVar6 += 1;
			} while (*pcVar1 != '\0');
			lVar5 = 0;
			do
			{
				cVar2 = param_1[lVar5 + 0x1a];
				*(char *)(lVar6 + lVar5) = cVar2;
				lVar5 += 1;
			} while (cVar2 != '\0');
			return;
		}
	}
	return;
}

void __thiscall Axa::MyApp::platformSpecific1(MyApp *this, char *param_1)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	char cVar1;
	undefined4 *puVar2;
	char *puVar6;
	longlong lVar3;
	char *puVar3;
	char *pcVar4;
	char *puVar5;
	char *puVar4;
	longlong lVar5;
	undefined auStack568[32];
	char local_218[8];
	char local_210[504];
	ulonglong local_18;

	// local_18 = DAT_140756f48 ^ (ulonglong)auStack568;
	pcVar4 = (this->AppInterface).data.FileName;
	lVar5 = -(longlong)param_1;
	do
	{
		cVar1 = *param_1;
		param_1[(longlong)(local_218 + lVar5)] = cVar1;
		param_1 = param_1 + 1;
	} while (cVar1 != '\0');
	memset(pcVar4, 0, 0x200);
	strncpy(pcVar4, local_218, 8);
	if (DAT_1408acf4c == 0)
	{
		puVar2 = (undefined4 *)((longlong) & (this->AppInterface).data.offset_0x254 + 3);
		do
		{
			puVar4 = (char *)puVar2;
			puVar2 = (undefined4 *)(puVar4 + 1);
		} while (puVar4[1] != '\0');
		lVar5 = (longlong) & (this->AppInterface).data.offset_0x254 + 3;
		/* "EPIC/" */
		*(undefined4 *)(puVar4 + 1) = 0x43495045;
		*(undefined2 *)(puVar4 + 5) = 0x2f;
		do
		{
			pcVar4 = (char *)(lVar5 + 1);
			lVar5 += 1;
		} while (*pcVar4 != '\0');
		lVar3 = 0;
		do
		{
			cVar1 = local_210[lVar3];
			*(char *)(lVar5 + lVar3) = cVar1;
			lVar3 += 1;
		} while (cVar1 != '\0');
		pcVar4 = "EPIC";
	}
	else if (DAT_1408acf4c == 1)
	{
		puVar2 = (undefined4 *)((longlong) & (this->AppInterface).data.offset_0x254 + 3);
		do
		{
			puVar5 = (char *)puVar2;
			puVar2 = (undefined4 *)(puVar5 + 1);
		} while (puVar5[1] != '\0');
		lVar5 = (longlong) & (this->AppInterface).data.offset_0x254 + 3;
		/* "PS4/" */
		*(undefined4 *)(puVar5 + 1) = 0x2f345350;
		puVar5[5] = '\0';
		do
		{
			pcVar4 = (char *)(lVar5 + 1);
			lVar5 += 1;
		} while (*pcVar4 != '\0');
		lVar3 = 0;
		do
		{
			cVar1 = local_210[lVar3];
			*(char *)(lVar5 + lVar3) = cVar1;
			lVar3 += 1;
		} while (cVar1 != '\0');
		pcVar4 = "PS4";
	}
	else
	{
		if (DAT_1408acf4c != 2)
		{
			if (DAT_1408acf4c != 3)
			{
				return;
			}
			puVar2 = (undefined4 *)((longlong) & (this->AppInterface).data.offset_0x254 + 3);
			do
			{
				puVar6 = (char *)puVar2;
				puVar2 = (undefined4 *)(puVar6 + 1);
			} while (puVar6[1] != '\0');
			lVar5 = (longlong) & (this->AppInterface).data.offset_0x254 + 3;
			/* "GGP/"
   That's Google Game Platform AKA Stadia */
			*(undefined4 *)(puVar6 + 1) = 0x2f504747;
			puVar6[5] = '\0';
			do
			{
				pcVar4 = (char *)(lVar5 + 1);
				lVar5 += 1;
			} while (*pcVar4 != '\0');
			lVar3 = 0;
			do
			{
				cVar1 = local_210[lVar3];
				*(char *)(lVar5 + lVar3) = cVar1;
				lVar3 += 1;
			} while (cVar1 != '\0');
			return;
		}
		puVar2 = (undefined4 *)((longlong) & (this->AppInterface).data.offset_0x254 + 3);
		do
		{
			puVar3 = (char *)puVar2;
			puVar2 = (undefined4 *)(puVar3 + 1);
		} while (puVar3[1] != '\0');
		lVar5 = (longlong) & (this->AppInterface).data.offset_0x254 + 3;
		/* "XB1/" */
		*(undefined4 *)(puVar3 + 1) = 0x2f314258;
		puVar3[5] = '\0';
		do
		{
			pcVar4 = (char *)(lVar5 + 1);
			lVar5 += 1;
		} while (*pcVar4 != '\0');
		lVar3 = 0;
		do
		{
			cVar1 = local_210[lVar3];
			*(char *)(lVar5 + lVar3) = cVar1;
			lVar3 += 1;
		} while (cVar1 != '\0');
		pcVar4 = "XB1";
	}
	FUN_140142900(pcVar4);
	return;
}

void __thiscall Axa::MyApp::setFilePath1(MyApp *this, char *FileName)
{
	sprintf(s_dummy_string_142bd2090, "%s%s", (this->AppInterface).data.FileName, FileName);
	sprintf((this->AppInterface).data.FilePath, "%s%s", (this->AppInterface).data.FileName, FileName);
	return;
}

void __thiscall Axa::MyApp::setFilePath2(MyApp *this, char *FileName)
{
	sprintf(s_dummy_string_142bd2210, "%s%s", (this->AppInterface).data.FileName2, FileName);
	sprintf((this->AppInterface).data.FilePath2, "%s%s", (this->AppInterface).data.FileName2, FileName);
	UINT_142bd2004 = 4126;
	return;
}

void UpdateStringPtrs(char *param_1, char *param_2, char *param_3, char *param_4)
{
	PTR_1408ad008 = param_1;
	PTR_1408ad010 = param_2;
	PTR_1408ad018 = str1;
	PTR_1408ad020 = param_4;
	return;
}

void UpdateLocale(void)
{
	uint locale2;
	undefined4 locale;
	char *l;
	char *pcLocale;

	l = GetFromCmdLn("-epiclocale");
	pcLocale = strstr(l, "en");
	if (pcLocale == NULL)
	{
		pcLocale = strstr(l, "fr");
		if (pcLocale != NULL)
		{
			locale = 4;
			locale2 = 4;
			goto LAB_1401004e4;
		}
		pcLocale = strstr(l, "it");
		if (pcLocale != NULL)
		{
			locale = 6;
			locale2 = 6;
			goto LAB_1401004e4;
		}
		pcLocale = strstr(l, "de");
		if (pcLocale != NULL)
		{
			locale = 3;
			locale2 = 3;
			goto LAB_1401004e4;
		}
		l = strstr(l, "es");
		if (l != NULL)
		{
			locale = 5;
			locale2 = 5;
			goto LAB_1401004e4;
		}
	}
	locale2 = 1;
	locale = 1;
LAB_1401004e4:
	if ((DAT_142bd2000 == 0) || (locale2 != 1))
	{
		if (6 < locale2)
		{
			(PTR_APP_14079a5f0->data).LocaleID = 0;
			return;
		}
	}
	else
	{
		locale = 2;
	}
	(PTR_APP_14079a5f0->data).LocaleID = locale;
	return;
}

int __thiscall Axa::MyApp::setSomeInteger(MyApp *this, int param_1)

{
	if (param_1 < 2)
	{
		(this->AppInterface).data.offset_0x210 = param_1;
		return 1;
	}
	return 0;
}

void __thiscall Axa::MyApp::concat1(MyApp *this, char *str)

{
	sprintf(str1, "%s%s", (this->AppInterface).data.FileName, str);
	return;
}

void PreparePKG(char *Name)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	char cVar1;
	char *pcVar2;
	Package *PKG;
	longlong lVar3;
	undefined auStackY344[32];
	int local_128[2];
	undefined8 local_120;
	char local_118[264];
	ulonglong local_10;

	if (Name != NULL)
	{
		// local_120 = 0xfffffffffffffffe;
		// local_10 = DAT_140756f48 ^ (ulonglong)auStackY344;
		memset(local_118, 0, 0x100);
		lVar3 = 0;
		do
		{
			cVar1 = s_dummy_string_142bd2090[lVar3];
			local_118[lVar3] = cVar1;
			lVar3 += 1;
		} while (cVar1 != '\0');
		pcVar2 = (char *)((longlong)&local_120 + 7);
		do
		{
			pcVar2 = pcVar2 + 1;
		} while (*pcVar2 != '\0');
		lVar3 = 0;
		do
		{
			cVar1 = Name[lVar3];
			pcVar2[lVar3] = cVar1;
			lVar3 += 1;
		} while (cVar1 != '\0');
		FUN_1400fdda0(DAT_1408acf40);
		PKG = (Package *)FUN_140137540(DAT_1408acf40, local_118, local_128, (uint)(local_128[0] != 0), 0);
		FUN_1400fdc90(DAT_1408acf40);
		if (PKG != NULL)
		{
			ProcessPKG(PKG, Name);
			_aligned_free(PKG);
		}
	}
	return;
}

undefined4 FUN_140138260(longlong param_1, void *param_2)
{
	uint _MaxCharCount;
	uint *_DstBuf;
	uint local_res8[2];

	_lseeki64(*(int *)(param_1 + 0x10),
			  (longlong)(*(int *)(param_1 + 0x130) * 0x30 + 0x10) + *(longlong *)(param_1 + 0x18), 0);
	local_res8[0] = *(uint *)(param_1 + 300);
	if ((0x10 < (int)local_res8[0]) && (*(char *)(param_1 + 0x124) != '\0'))
	{
		_MaxCharCount = *(uint *)(param_1 + 0x134);
		if (0 < (int)_MaxCharCount)
		{
			_DstBuf = (uint *)_aligned_malloc((longlong)(int)_MaxCharCount, 0x10);
			_read(*(int *)(param_1 + 0x10), _DstBuf, _MaxCharCount);
			FUN_140136fb0(param_1, (longlong)_DstBuf, _MaxCharCount, (undefined4 *)(param_1 + 0x148));
			FUN_140467690(param_2, local_res8, _DstBuf, _MaxCharCount);
			if (_DstBuf != NULL)
			{
				_aligned_free(_DstBuf);
			}
			return *(undefined4 *)(param_1 + 300);
		}
		_read(*(int *)(param_1 + 0x10), param_2, local_res8[0]);
		if (_MaxCharCount == 0xffffffff)
		{
			FUN_140136fb0(param_1, (longlong)param_2, *(uint *)(param_1 + 300), (undefined4 *)(param_1 + 0x148));
		}
		return *(undefined4 *)(param_1 + 300);
	}
	_read(*(int *)(param_1 + 0x10), param_2, local_res8[0]);
	return *(undefined4 *)(param_1 + 300);
}

void fnkh2Converter_(char *param_1)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	char cVar1;
	char cVar2;
	ulonglong uVar3;
	undefined *puVar4;
	longlong lVar5;
	char *pcVar6;
	char *pcVar7;
	char *pcVar8;
	int *_Memory;
	undefined2 *puVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	undefined auStackY376[32];
	int local_148[2];
	undefined local_140[8];
	char local_138[264];
	ulonglong local_30;

	if (param_1 != NULL)
	{
		// local_140 = 0xfffffffffffffffe;
		// local_30 = DAT_140756f48 ^ (ulonglong)auStackY376;
		lVar5 = -1;
		do
		{
			lVar5 += 1;
		} while (param_1[lVar5] != '\0');
		if (lVar5 != 0)
		{
			uVar11 = 0;
			pcVar6 = PTR_DAT_140744980;
			uVar10 = uVar11;
			if (PTR_DAT_140744980 != NULL)
			{
				do
				{
					pcVar6 = strstr(param_1, pcVar6);
					if (pcVar6 != NULL)
					{
						return;
					}
					uVar10 += 1;
					pcVar6 = (&PTR_DAT_140744980)[uVar10];
				} while ((&PTR_DAT_140744980)[uVar10] != NULL);
			}
			memset(local_138, 0, 0x100);
			pcVar6 = strstr(s_dummy_string_142bd2090, "PS3");
			if (pcVar6 == NULL)
			{
				sprintf(local_138, "%s/%s", s_dummy_string_142bd2090, param_1);
			}
			else
			{
				strncpy(local_138, s_dummy_string_142bd2090, (size_t)(pcVar6 + -0x142bd2090));
				puVar9 = (undefined2 *)(local_140 + 7);
				do
				{
					puVar9 = (undefined2 *)((longlong)puVar9 + 1);
				} while (*(char *)puVar9 != '\0');
				*puVar9 = 0x2f;
				pcVar6 = local_140 + 7;
				do
				{
					pcVar6 = pcVar6 + 1;
				} while (*pcVar6 != '\0');
				lVar5 = 0;
				do
				{
					cVar1 = param_1[lVar5];
					pcVar6[lVar5] = cVar1;
					lVar5 += 1;
				} while (cVar1 != '\0');
			}
			pcVar6 = strstr(local_138, "/jp/");
			uVar10 = uVar11;
			uVar3 = uVar11;
			if (pcVar6 == NULL)
			{
				pcVar6 = strstr(local_138, "/us/");
				if (pcVar6 == NULL)
				{
					pcVar6 = strstr(local_138, "/uk/");
					if (pcVar6 == NULL)
					{
						pcVar6 = strstr(local_138, "/gr/");
						if (pcVar6 == NULL)
						{
							pcVar6 = strstr(local_138, "/fr/");
							if (pcVar6 == NULL)
							{
								pcVar6 = strstr(local_138, "/sp/");
								if (pcVar6 == NULL)
								{
									pcVar6 = strstr(local_138, "/it/");
									if (pcVar6 == NULL)
									{
										strstr(local_138, "/fm/");
										DAT_1407449b0 = 0xffffffff;
										puVar4 = PTR_FUN_1407449d0;
									}
									else
									{
										DAT_1407449b0 = 6;
										puVar4 = PTR_FUN_1407449d0;
									}
								}
								else
								{
									DAT_1407449b0 = 5;
									puVar4 = PTR_FUN_1407449d0;
								}
							}
							else
							{
								DAT_1407449b0 = 4;
								puVar4 = PTR_FUN_1407449d0;
							}
						}
						else
						{
							DAT_1407449b0 = 3;
							puVar4 = PTR_FUN_1407449d0;
						}
					}
					else
					{
						DAT_1407449b0 = 2;
						puVar4 = PTR_FUN_1407449d0;
					}
				}
				else
				{
					DAT_1407449b0 = 1;
					puVar4 = PTR_FUN_1407449d0;
				}
			}
			else
			{
				DAT_1407449b0 = 0;
				puVar4 = PTR_FUN_1407449d0;
			}
			while (puVar4 != NULL)
			{
				pcVar7 = strchr(param_1, 0x2e);
				pcVar6 = *(char **)((longlong)&PTR_s_00areainfo.bin_1407449c0 + uVar10);
				if (pcVar6 != NULL)
				{
					pcVar8 = param_1;
					do
					{
						cVar1 = *pcVar8;
						cVar2 = pcVar8[(longlong)pcVar6 - (longlong)param_1];
						if (cVar1 != cVar2)
							break;
						pcVar8 = pcVar8 + 1;
					} while (cVar2 != '\0');
					if (cVar1 == cVar2)
					{
						FUN_1400fdda0(DAT_1408acf40);
						_Memory = FUN_140137540(DAT_1408acf40, local_138, local_148, 1, 0);
						FUN_1400fdc90(DAT_1408acf40);
						goto LAB_1403722ff;
					}
					pcVar6 = strstr(param_1, pcVar6);
					if ((pcVar6 != NULL) && (*(longlong *)((longlong)&DAT_1407449c8 + uVar10) != 0))
					{
						pcVar6 = pcVar7;
						do
						{
							cVar1 = *pcVar6;
							cVar2 = pcVar6[*(longlong *)((longlong)&DAT_1407449c8 + uVar10) - (longlong)pcVar7];
							if (cVar1 != cVar2)
								break;
							pcVar6 = pcVar6 + 1;
						} while (cVar2 != '\0');
						if (cVar1 == cVar2)
						{
							FUN_1400fdda0(DAT_1408acf40);
							_Memory = FUN_140137540(DAT_1408acf40, local_138, local_148, 1, 0);
							FUN_1400fdc90(DAT_1408acf40);
							goto LAB_1403722ff;
						}
					}
				}
				if ((*(longlong *)((longlong)&PTR_s_00areainfo.bin_1407449c0 + uVar10) == 0) &&
					(*(longlong *)((longlong)&DAT_1407449c8 + uVar10) != 0))
				{
					lVar5 = *(longlong *)((longlong)&DAT_1407449c8 + uVar10) - (longlong)pcVar7;
					do
					{
						cVar1 = *pcVar7;
						cVar2 = pcVar7[lVar5];
						if (cVar1 != cVar2)
							break;
						pcVar7 = pcVar7 + 1;
					} while (cVar2 != '\0');
					if (cVar1 == cVar2)
					{
						FUN_1400fdda0(DAT_1408acf40);
						_Memory = FUN_140137540(DAT_1408acf40, local_138, local_148, 1, 0);
						FUN_1400fdc90(DAT_1408acf40);
					LAB_1403722ff:
						if (_Memory == NULL)
						{
							return;
						}
						(*(code *)(&PTR_FUN_1407449d0)[(longlong)(int)uVar3 * 3])(_Memory, param_1, local_148[0]);
						_aligned_free(_Memory);
						return;
					}
				}
				uVar11 += 1;
				uVar10 = uVar11 * 0x18;
				uVar3 = (ulonglong)((int)uVar3 + 1);
				puVar4 = (&PTR_FUN_1407449d0)[uVar11 * 3];
			}
		}
	}
	return;
}

undefined *StringCharCodeProc(undefined *param_1, undefined8 param_2, char *digitStr)
{
	byte *pbVar1;
	int isdgt;
	uint uVar2;
	byte digit;

	digit = *digitStr;
	while (digit != 0)
	{
		uVar2 = 1;
		isdgt = isdigit((uint)digit);
		if (isdgt != 0)
		{
			uVar2 = 0;
			isdgt = isdigit((uint)(byte)*digitStr);
			while (isdgt != 0)
			{
				digit = *digitStr;
				digitStr = (char *)((byte *)digitStr + 1);
				uVar2 = (int)(char)digit + uVar2 * 10 + -0x30;
				isdgt = isdigit((uint)(byte)*digitStr);
			}
		}
		switch (*digitStr)
		{
		case 'C':
		case 'c':
			param_1 = param_1 + (int)uVar2;
			break;
		case 'D':
		case 'Q':
			param_1 = param_1 + (longlong)(int)uVar2 * 8;
			break;
		case 'F':
		case 'I':
			param_1 = param_1 + (longlong)(int)uVar2 * 4;
			break;
		case 'S':
			param_1 = param_1 + (longlong)(int)uVar2 * 2;
			break;
		case 'd':
		case 'q':
			param_1 = FUN_1401482c0(param_1, uVar2);
			break;
		case 'f':
		case 'i':
			param_1 = FUN_140148280(param_1, uVar2);
			break;
		case 's':
			param_1 = FUN_140148250(param_1, uVar2);
		}
		pbVar1 = (byte *)digitStr + 1;
		digitStr = (char *)((byte *)digitStr + 1);
		digit = *pbVar1;
	}
	return param_1;
}

int Axa::fileIoOpen(char *param_1, int param_2)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	errno_t eVar1;
	undefined auStackY344[32];
	int aiStack296[4];
	char acStack280[256];
	ulonglong uStack24;

	// uStack24 = DAT_140756f48 ^ (ulonglong)auStackY344;
	sprintf(acStack280, param_1);
	eVar1 = _sopen_dispatch(acStack280, param_2, 0x40, 0, aiStack296, 0);
	if (eVar1 != 0)
	{
		aiStack296[0] = -1;
	}
	return aiStack296[0];
}

undefined **__thiscall FUN_14036a8a0(void *this)
{
	int iVar1;
	int iVar2;
	longlong lVar3;
	char *_Dst;
	undefined **ppuVar4;
	char *pcVar5;
	char *pcVar6;
	char *pcVar7;
	undefined **ppuVar8;
	uint _MaxCharCount;

	/* int _Origin for _lseeki64 */
	/* longlong _Offset for _lseeki64 */
	/* int _FileHandle for _lseeki64 */
	/* inlined constructor or destructor (approx location) for Axa::CSJointListT<struct_inport_list> */
	*(undefined ***)this = Axa::CSJointListT<struct_inport_list>::vftable;
	*(undefined8 *)((longlong)this + 8) = 0;
	*(undefined8 *)((longlong)this + 0x10) = 0;
	*(undefined4 *)((longlong)this + 0x18) = 0;
	iVar1 = Axa::fileIoOpen("//caelum/proj/KH2-Sound/kh2_sound_connection.txt", 0x8000);
	lVar3 = _lseeki64(iVar1, 0, 2);
	_lseeki64(iVar1, 0, 0);
	_MaxCharCount = (uint)lVar3;
	_Dst = (char *)_aligned_malloc((longlong)(int)_MaxCharCount, 0x10);
	memset(_Dst, 0, (longlong)(int)_MaxCharCount);
	iVar2 = _read(iVar1, _Dst, _MaxCharCount);
	_close(iVar1);
	for (pcVar7 = _Dst; pcVar7 < _Dst + iVar2; pcVar7 = pcVar7 + 1)
	{
		ppuVar8 = NULL;
		ppuVar4 = (undefined **)new (0xe0);
		if (ppuVar4 != NULL)
		{
			ppuVar4[1] = NULL;
			*ppuVar4 = (undefined *)inport_list::vftable;
			ppuVar4[2] = NULL;
			ppuVar4[3] = NULL;
			ppuVar4[4] = NULL;
			ppuVar4[5] = NULL;
			ppuVar4[6] = NULL;
			ppuVar4[7] = NULL;
			ppuVar4[8] = NULL;
			ppuVar4[9] = NULL;
			*(undefined8 *)((longlong)ppuVar4 + 0x54) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x5c) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 100) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x6c) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x74) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x7c) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x84) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x8c) = 0;
			*(undefined8 *)((longlong)ppuVar4 + 0x94) = 0;
			pcVar5 = strchr(pcVar7, 0x5b);
			strncpy((char *)(ppuVar4 + 2), pcVar7, (longlong)pcVar5 - (longlong)pcVar7);
			iVar1 = atoi(pcVar5 + 1);
			*(int *)(ppuVar4 + 10) = iVar1;
			pcVar5 = strchr(pcVar5 + 1, 0x3a);
			*(undefined4 *)((longlong)ppuVar4 + 0x54) = *(undefined4 *)(pcVar5 + 1);
			pcVar5 = strchr(pcVar5 + 1, 0x3a);
			pcVar5 = pcVar5 + 1;
			pcVar6 = strchr(pcVar5, 10);
			strncpy((char *)((longlong)ppuVar4 + 0x5c), pcVar5, (size_t)(pcVar6 + (-1 - (longlong)pcVar5)));
			ppuVar8 = ppuVar4;
		}
		if (ppuVar8[1] == NULL)
		{
			if (*(longlong *)((longlong)this + 8) == 0)
			{
				*(undefined ***)((longlong)this + 8) = ppuVar8;
			}
			if (*(longlong *)((longlong)this + 0x10) != 0)
			{
				*(undefined ***)(*(longlong *)((longlong)this + 0x10) + 8) = ppuVar8;
			}
			*(undefined ***)((longlong)this + 0x10) = ppuVar8;
			*(int *)((longlong)this + 0x18) = *(int *)((longlong)this + 0x18) + 1;
		}
		pcVar7 = strchr(pcVar7, 10);
	}
	if (_Dst != NULL)
	{
		_aligned_free(_Dst);
	}
	return (undefined **)this;
}

void fnkh2SoundInport(char *param_1, char param_2)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	/* WARNING: Could not reconcile some variable overlaps */
	char cVar1;
	int iVar2;
	uint uVar3;
	char *pcVar4;
	longlong lVar5;
	FILE *_File;
	FILE *_File_00;
	void *_Dst;
	undefined *puVar6;
	code **ppcVar7;
	char *pcVar8;
	uint uVar9;
	ulonglong uVar10;
	undefined auStackY744[32];
	undefined7 in_stack_fffffffffffffd39;
	undefined *local_2b0;
	longlong local_2a8;
	char *local_298;
	undefined local_278[8];
	code **local_270;
	char local_258[256];
	char cStack313;
	char local_138[256];
	ulonglong local_38;

	if (param_1 != NULL)
	{
		// local_38 = DAT_140756f48 ^ (ulonglong)auStackY744;
		pcVar4 = strstr(param_1, "obj");
		if (((((pcVar4 == NULL) || (pcVar4 = strstr(param_1, ".a.fm"), pcVar4 != NULL)) ||
			  (pcVar4 = strstr(param_1, ".a.us"), pcVar4 != NULL)) ||
			 ((pcVar4 = strstr(param_1, ".a.fr"), pcVar4 != NULL || (pcVar4 = strstr(param_1, ".a.gr"), pcVar4 != NULL)))) ||
			((pcVar4 = strstr(param_1, ".a.it"), pcVar4 != NULL || (pcVar4 = strstr(param_1, ".a.sp"), pcVar4 != NULL))))
		{
			memset(local_138, 0, 0x100);
			memset(local_258 + 0x20, 0, 0x100);
			lVar5 = 0;
			do
			{
				cVar1 = s_dummy_string_142bd2090[lVar5];
				local_138[lVar5] = cVar1;
				lVar5 += 1;
			} while (cVar1 != '\0');
			pcVar4 = &cStack313;
			do
			{
				pcVar4 = pcVar4 + 1;
			} while (*pcVar4 != '\0');
			lVar5 = 0;
			do
			{
				cVar1 = param_1[lVar5];
				pcVar4[lVar5] = cVar1;
				lVar5 += 1;
			} while (cVar1 != '\0');
			/* "//caelum/proj/rsrc/KH2ReSource" */
			local_258._32_4_ = 0x61632f2f;
			local_258._36_4_ = 0x6d756c65;
			local_258._40_4_ = 0x6f72702f;
			local_258._44_4_ = 0x73722f6a;
			local_258._48_8_ = 0x655232484b2f6372;
			local_258._56_4_ = 0x72756f53;
			local_258._60_2_ = 0x6563;
			local_258[62] = '\0';
			pcVar4 = local_258 + 0x1f;
			do
			{
				pcVar4 = pcVar4 + 1;
			} while (*pcVar4 != '\0');
			lVar5 = 0;
			do
			{
				pcVar4 = param_1 + lVar5;
				lVar5 += 1;
			} while (*pcVar4 != '\0');
			FUN_14036a8a0(local_278);
			FUN_140371e30(local_138);
			iVar2 = Axa::fileIoOpen(local_138, 0x8000);
			lVar5 = _lseeki64(iVar2, 0, 2);
			_lseeki64(iVar2, 0, 0);
			uVar3 = (uint)lVar5;
			pcVar4 = (char *)_aligned_malloc((longlong)(int)uVar3 + 0x80, 0x10);
			memset(pcVar4, 0, (longlong)(int)uVar3 + 0x80);
			_read(iVar2, pcVar4, uVar3);
			_close(iVar2);
			if (pcVar4 != NULL)
			{
				_File = fopen(local_138, "wb");
				fwrite(pcVar4, 1, 0x10, _File);
				if (param_2 != '\0')
				{
					DAT_140713320 = 0;
					pcVar8 = pcVar4 + 0x10;
					StringCharCodeProc(pcVar4, pcVar8, "4c 3i");
					if ((DAT_140713320 == 0) && (0 < (int)*(uint *)(pcVar4 + 4)))
					{
						uVar10 = (ulonglong) * (uint *)(pcVar4 + 4);
						do
						{
							StringCharCodeProc(pcVar8, pcVar8 + 0x10, "1s 1s 1i 1i 1i");
							pcVar8 = pcVar8 + 0x10;
							uVar10 -= 1;
						} while (uVar10 != 0);
					}
					DAT_140713320 = (uint)(DAT_1408c99a0 == 0);
				}
				/* "C:/tmp/tmpard.bin" */
				local_258._0_4_ = 0x742f3a43;
				local_258._4_4_ = 0x742f706d;
				local_258._8_4_ = 0x7261706d;
				local_258._12_4_ = 0x69622e64;
				local_258._16_2_ = 0x6e;
				_File_00 = fopen(local_258, "wb");
				uVar3 = FUN_14036b570(pcVar4);
				uVar10 = (ulonglong)uVar3;
				FUN_14036b150(pcVar4, param_1, _File_00, 0, CONCAT71(in_stack_fffffffffffffd39, param_2), (longlong)local_278);
				fclose(_File_00);
				if (param_2 != '\0')
				{
					DAT_140713320 = 0;
					uVar9 = 0;
					puVar6 = &DAT_140bee5f0;
					if (DAT_1408c99a0 == 0)
					{
						local_2a8 = 0x10;
						local_2b0 = puVar6;
						local_298 = "1s 1s 1i 1i 1i";
						uVar9 = uVar3;
					}
					else if (0 < (int)uVar3)
					{
						do
						{
							StringCharCodeProc(puVar6, puVar6 + 0x10, "1s 1s 1i 1i 1i");
							uVar10 -= 1;
							puVar6 = puVar6 + 0x10;
						} while (uVar10 != 0);
					}
					DAT_140713320 = (uint)(DAT_1408c99a0 == 0);
					if ((DAT_1408c99a0 == 0) && (0 < (int)uVar9))
					{
						uVar10 = (ulonglong)uVar9;
						do
						{
							StringCharCodeProc(local_2b0, local_2b0 + local_2a8, local_298);
							uVar10 -= 1;
							local_2b0 = local_2b0 + local_2a8;
						} while (uVar10 != 0);
					}
				}
				FUN_14036b4d0(uVar3, _File);
				_aligned_free(pcVar4);
				iVar2 = Axa::fileIoOpen(local_258, 0x8000);
				if (0 < iVar2)
				{
					lVar5 = _lseeki64(iVar2, 0, 2);
					_lseeki64(iVar2, 0, 0);
					uVar10 = (ulonglong)((uint)lVar5 + 0xf) & 0xfffffff0;
					_Dst = _aligned_malloc(uVar10, 0x10);
					memset(_Dst, 0, uVar10);
					_read(iVar2, _Dst, (uint)lVar5);
					_close(iVar2);
					fwrite(_Dst, 1, uVar10, _File);
					if (_Dst != NULL)
					{
						_aligned_free(_Dst);
					}
				}
				fclose(_File);
			}
			if (local_270 != NULL)
			{
				for (ppcVar7 = (code **)local_270[1]; (**(code **)*local_270)(local_270, 1), ppcVar7 != NULL;
					 ppcVar7 = (code **)ppcVar7[1])
				{
					local_270 = ppcVar7;
				}
			}
		}
	}
	return;
}

void FUN_14036b4d0(uint param_1, FILE *param_2)
{
	longlong lVar1;
	int *piVar2;
	ulonglong uVar3;
	undefined *_Str;

	if (0 < (int)param_1)
	{
		piVar2 = &DAT_140bee5f4;
		_Str = &DAT_140bee5f0;
		uVar3 = (ulonglong)param_1;
		do
		{
			if ((*(byte *)((longlong)piVar2 + -2) & 1) != 0)
			{
				lVar1 = (longlong)*piVar2;
				*piVar2 = (&DAT_140bee5f4)[lVar1 * 4];
				piVar2[1] = (&DAT_140bee5f8)[lVar1 * 4];
				piVar2[2] = (&DAT_140bee5fc)[lVar1 * 4];
			}
			fwrite(_Str, 0x10, 1, param_2);
			_Str = _Str + 0x10;
			piVar2 = piVar2 + 4;
			uVar3 -= 1;
		} while (uVar3 != 0);
	}
	return;
}

int FUN_14036b570(char *param_1)
{
	int iVar1;
	int *piVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;

	memset(&DAT_140bee5f0, 0, 0x1000);
	if (((*param_1 == 'B') && (param_1[1] == 'A')) && (param_1[2] == 'R'))
	{
		iVar5 = *(int *)(param_1 + 4);
		if (0 < iVar5)
		{
			piVar6 = &DAT_140bee5e4;
			iVar5 = -1;
			do
			{
				piVar2 = (int *)(param_1 + -0x140bee5d4 + (longlong)piVar6);
				iVar1 = piVar2[1];
				iVar3 = piVar2[2];
				iVar4 = piVar2[3];
				piVar6[3] = *piVar2;
				piVar6[4] = iVar1;
				piVar6[5] = iVar3;
				piVar6[6] = iVar4;
				piVar2 = piVar6;
				iVar1 = iVar5;
				if ((*(byte *)((longlong)piVar6 + 0xe) & 1) != 0)
				{
					for (; - 1 < iVar1; iVar1 = iVar1 + -1)
					{
						if ((((*(byte *)((longlong)piVar2 + -2) & 1) == 0) && (piVar6[4] == *piVar2)) &&
							((piVar6[5] == piVar2[1] && (piVar6[6] == piVar2[2]))))
						{
							piVar6[4] = iVar1;
						}
						piVar2 = piVar2 + -4;
					}
				}
				piVar6 = piVar6 + 4;
				iVar1 = iVar5 + 2;
				iVar5 = iVar5 + 1;
			} while (iVar1 < *(int *)(param_1 + 4));
			return *(int *)(param_1 + 4);
		}
	}
	else
	{
		iVar5 = 0;
	}
	return iVar5;
}

void fnkh2Inport(char *param_1)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	/* WARNING: Could not reconcile some variable overlaps */
	char cVar1;
	uint uVar2;
	int _FileHandle;
	int *_Memory;
	char *pcVar3;
	FILE *fh;
	longlong lVar4;
	void *_Dst;
	ulonglong _Size;
	undefined auStackY392[32];
	int local_158[2];
	undefined8 local_150;
	char FileName1[24];
	char cStack297;
	char FileName2[264];
	ulonglong local_20;

	if (param_1 != NULL)
	{
		/* size_t _Size for memset */
		/* int _Val for memset */
		/* void * _Dst for memset */
		// local_150 = 0xfffffffffffffffe;
		// local_20 = DAT_140756f48 ^ (ulonglong)auStackY392;
		memset(FileName2, 0, 0x100);
		lVar4 = 0;
		do
		{
			cVar1 = s_dummy_string_142bd2090[lVar4];
			FileName2[lVar4] = cVar1;
			lVar4 += 1;
		} while (cVar1 != '\0');
		pcVar3 = &cStack297;
		do
		{
			pcVar3 = pcVar3 + 1;
		} while (*pcVar3 != '\0');
		lVar4 = 0;
		do
		{
			cVar1 = param_1[lVar4];
			pcVar3[lVar4] = cVar1;
			lVar4 += 1;
		} while (cVar1 != '\0');
		FUN_1400fdda0(DAT_1408acf40);
		_Memory = FUN_140137540(DAT_1408acf40, FileName2, local_158, 1, 0);
		FUN_1400fdc90(DAT_1408acf40);
		if (_Memory != NULL)
		{
			pcVar3 = (char *)_aligned_realloc(_Memory, (longlong)(local_158[0] + 0x100000), 0x10);
			/* "C:/tmp/tmpard.bin" */
			FileName1._0_4_ = 0x742f3a43;
			FileName1._4_4_ = 0x742f706d;
			FileName1._8_4_ = 0x7261706d;
			FileName1._12_4_ = 0x69622e64;
			FileName1._16_2_ = 0x6e;
			fh = fopen(FileName1, "wb");
			uVar2 = FUN_14036b570(pcVar3);
			Axa::CSJointListT<struct_inport_list>::CSJointListT<struct_inport_list> _Constructor_or_Destructor(pcVar3, param_1, fh);
			fclose(fh);
			fh = fopen(FileName2, "wb");
			fwrite(pcVar3, 1, 0x10, fh);
			FUN_14036b4d0(uVar2, fh);
			if (pcVar3 != NULL)
			{
				_aligned_free(pcVar3);
			}
			_FileHandle = Axa::fileIoOpen(FileName1, 0x8000);
			if (0 < _FileHandle)
			{
				lVar4 = _lseeki64(_FileHandle, 0, 2);
				_lseeki64(_FileHandle, 0, 0);
				_Size = (ulonglong)((uint)lVar4 + 0xf) & 0xfffffff0;
				_Dst = _aligned_malloc(_Size, 0x10);
				memset(_Dst, 0, _Size);
				_read(_FileHandle, _Dst, (uint)lVar4);
				_close(_FileHandle);
				fwrite(_Dst, 1, _Size, fh);
				if (_Dst != NULL)
				{
					_aligned_free(_Dst);
				}
			}
			fclose(fh);
		}
	}
	return;
}

void FUN_14013a230(char *param_1, uint param_2, int *param_3)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	char cVar1;
	longlong lVar2;
	char *pcVar3;
	longlong lVar4;
	undefined auStack200[32];
	char local_a8[128];
	ulonglong local_28;

	/* size_t _Size for memset */
	/* int _Val for memset */
	/* void * _Dst for memset */
	// local_28 = DAT_140756f48 ^ (ulonglong)auStack200;
	memset(local_a8, 0, 0x80);
	pcVar3 = strstr(param_1, s_dummy_string_142bd2090);
	if (pcVar3 == NULL)
	{
		sprintf(local_a8, param_1);
	}
	else
	{
		lVar2 = -1;
		do
		{
			lVar4 = lVar2;
			lVar2 = lVar4 + 1;
		} while (s_dummy_string_142bd2090[lVar4 + 1] != '\0');
		pcVar3 = pcVar3 + lVar4 + 2;
		lVar2 = -(longlong)pcVar3;
		do
		{
			cVar1 = *pcVar3;
			pcVar3[(longlong)(local_a8 + lVar2)] = cVar1;
			pcVar3 = pcVar3 + 1;
		} while (cVar1 != '\0');
	}
	FUN_140139bf0(local_a8, param_2, param_3);
	return;
}

PackageFile *Axa::PackageFile::FUN_140137610(char *param_1, longlong param_2)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	/* WARNING: Unable to use type for symbol nsec */
	/* WARNING: Could not reconcile some variable overlaps */
	bool bVar1;
	longlong now;
	char *settingsmenu;
	PackageFile **pkg_idx;
	int iVar2;
	int sec_2;
	xtime xtime;
	longlong nsec;
	PackageFile *pkg;

	if (PACKAGE_COUNT == 0)
	{
		do
		{
			now = _Xtime_get_ticks();
			now = (now + 10) * 100;
			nsec = now / 1000000000;
			xtime.sec._0_4_ = (int)nsec;
			xtime.nsec = (int)now + (int)xtime.sec * -1000000000;
			sec_2 = (int)((ulonglong)nsec >> 0x20);
			xtime.sec._4_4_ = sec_2;
			_Thrd_sleep(&xtime);
		} while (PACKAGE_COUNT == 0);
	}
	if (param_2 == 0)
	{
		PKG_PROC_COUNT = 0;
		iVar2 = PACKAGE_COUNT;
		if (0 < PACKAGE_COUNT)
		{
			do
			{
				pkg = PACKAGES[PKG_PROC_COUNT];
				if ((pkg != NULL) &&
					(bVar1 = (*pkg->vftablePtr->vfunction1)(pkg, param_1, 0), iVar2 = PACKAGE_COUNT, bVar1 != false))
				{
					return PACKAGES[PKG_PROC_COUNT];
				}
				PKG_PROC_COUNT += 1;
			} while (PKG_PROC_COUNT < iVar2);
		}
	}
	else
	{
		pkg_idx = PACKAGES;
		do
		{
			pkg = *pkg_idx;
			settingsmenu = strstr((pkg->data).FileName, "SettingMenu.pkg");
			if ((settingsmenu != NULL) && (bVar1 = (*pkg->vftablePtr->vfunction1)(pkg, param_1, param_2), bVar1 != false))
			{
				return pkg;
			}
			pkg_idx = pkg_idx + 1;
		} while (pkg_idx != (PackageFile **)&DAT_1408acfe0);
	}
	return NULL;
}

int *FUN_140137540(undefined8 param_1, char *param_2, int *param_3, int param_4, longlong param_5)
{
	int iVar1;
	int iVar2;
	longlong lVar3;
	int *_Memory;

	_Memory = NULL;
	lVar3 = Axa::PackageFile::FUN_140137610(param_2, param_5);
	if (lVar3 != 0)
	{
		iVar2 = *param_3;
		iVar1 = *(int *)(lVar3 + 300);
		*param_3 = iVar1;
		if (iVar2 != -1)
		{
			_Memory = (int *)_aligned_malloc((longlong)iVar1, 0x10);
			iVar2 = FUN_140138260(lVar3, _Memory);
			if (iVar2 < 0)
			{
				if (_Memory != NULL)
				{
					_aligned_free(_Memory);
				}
				_Memory = NULL;
				*param_3 = -2;
			}
			else if ((param_4 != 0) && (iVar2 = FUN_14013a230(param_2, *(uint *)(lVar3 + 300), _Memory), iVar2 == -1))
			{
				_Memory = NULL;
			}
		}
	}
	return _Memory;
}

void ProcessPKG(Package *PKG, char *str)
{
	/* WARNING: Function: FUN_140437180 replaced with injection: alloca_probe */
	/* WARNING: Could not reconcile some variable overlaps */
	char cVar1;
	char cVar2;
	longlong lVar3;
	char *slash;
	code **ppcVar4;
	char *interdata;
	char *dot;
	PackageContent *PKG_Data;
	code **ppcVar5;
	code **ppcVar6;
	int idx;
	undefined auStack984[32];
	undefined8 local_3b8;
	CSJointListT<struct_MDLXList> local_3b0;
	code **local_3a8;
	char ebin2[8];
	char ebin1[64];
	char PathStr[256];
	char mdlName[256];
	char mdlPath[264];
	ulonglong local_40;

	// local_3b8 = 0xfffffffffffffffe;
	// local_40 = DAT_140756f48 ^ (ulonglong)auStack984;
	Axa::CSJointListT<struct_MDLXList>::FUN_140369ff0(&local_3b0);
	if (((((PKG->Header).Magic[0] == 'B') && ((PKG->Header).Magic[1] == 'A')) && ((PKG->Header).Magic[2] == 'R')) &&
		(idx = 0, 0 < (PKG->Header).Size))
	{
		PKG_Data = &PKG->Content;
		do
		{
			if ((PKG_Data->field_0xa != 0) && ((PKG_Data->field_0x0 & 1) == 0))
			{
				switch (*(undefined2 *)&PKG_Data[-1].field_0xe)
				{
				case 1:
				case 0x11:
				case 0x14:
				case 0x1e:
				case 0x2e:
					ProcessPKG((Package *)((PKG->Header).Magic + PKG_Data->NextOffset), str);
					break;
				case 4:
					slash = strrchr(str, L'/');
					if (local_3a8 != NULL)
					{
						ppcVar5 = local_3a8;
						ppcVar6 = (code **)local_3a8[1];
						do
						{
							ppcVar4 = ppcVar5 + 2;
							lVar3 = 1 - (longlong)ppcVar4;
							do
							{
								cVar1 = *(char *)ppcVar4;
								cVar2 = *(char *)((longlong)ppcVar4 + (longlong)((longlong)slash + lVar3));
								if (cVar1 != cVar2)
									break;
								ppcVar4 = (code **)((longlong)ppcVar4 + 1);
							} while (cVar2 != '\0');
							if (cVar1 == cVar2)
							{
								interdata = strstr((char *)(ppcVar5 + 10), "interdata");
								if (interdata != NULL)
								{
									memset(mdlName, 0, 256);
									dot = strrchr(interdata, L'.');
									strncpy(mdlName, interdata, (longlong)dot - (longlong)interdata);
									sprintf(PathStr, "//kh2/home/prog/snasu/%s.mdl", mdlName);
									sprintf(mdlPath, "//caelum/proj/KH2-CharExport/%s.mdl", mdlName);
									FUN_140371e30(PathStr);
									CopyFileA(mdlPath, PathStr, 0);
								}
								break;
							}
							if (ppcVar6 == NULL)
								break;
							ppcVar5 = ppcVar6;
							ppcVar6 = (code **)ppcVar6[1];
						} while (true);
					}
					break;
				case 0x16:
					ebin1._0_8_ = 0;
					ebin1._8_8_ = 0;
					ebin1._16_8_ = 0;
					ebin1._24_8_ = 0;
					ebin1._32_8_ = 0;
					ebin1._40_8_ = 0;
					ebin1._48_8_ = 0;
					ebin1._56_8_ = 0;
					ebin2._0_4_ = 0;
					ebin2._4_2_ = 0;
					dot = strchr(str, L'.');
					strncpy(ebin1, str, (longlong)dot - (longlong)str);
					strncpy(ebin2, (&PKG->Header)[1].Magic + (longlong)idx * 0x10 + 2, 4);
					sprintf(PathStr, "//caelum/proj/KH2-Event/hd25event%s-%s.ebin", ebin1, ebin2);
					FUN_140371e30(PathStr);
					FUN_1400fdda0(DAT_1408acf40);
					FUN_1401377c0();
					FUN_1400fdc90(DAT_1408acf40);
				}
			}
			idx += 1;
			PKG_Data = PKG_Data + 1;
		} while (idx < (PKG->Header).Size);
	}
	if (local_3a8 != NULL)
	{
		ppcVar5 = (code **)local_3a8[1];
		while (ppcVar6 = ppcVar5, (**(code **)*local_3a8)(local_3a8, 1), ppcVar6 != NULL)
		{
			local_3a8 = ppcVar6;
			ppcVar5 = (code **)ppcVar6[1];
		}
	}
	return;
}
