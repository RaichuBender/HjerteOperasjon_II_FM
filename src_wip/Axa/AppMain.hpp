/**
 * @file AppMain.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __APPMAIN_H__
#define __APPMAIN_H__

#include "common.hpp"
#include "Axa.hpp"

typedef struct
{
	char FilePath[260];
	int offset_0x104;
	int offset_0x108;
	int offset_0x10c;
} PackageLoadHeader;

#endif // __APPMAIN_H__
