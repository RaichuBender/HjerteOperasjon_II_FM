/**
 * @file ghidra_typedefs.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __GHIDRA_TYPEDEFS_H__
#define __GHIDRA_TYPEDEFS_H__

#ifdef __cplusplus
extern "C" {
#endif


#include <stdint.h>
#include <stdbool.h>

typedef uint8_t byte;
typedef uint8_t uchar;
typedef uint8_t undefined;
typedef uint8_t undefined1;

typedef uint16_t ushort;
typedef uint16_t undefined2;

typedef uint32_t uint;
typedef uint32_t ulong;
typedef uint32_t undefined4;

typedef uint64_t ulonglong;
typedef uint64_t undefined8;

typedef int64_t longlong;

#ifdef __cplusplus
}
#endif

#endif // __GHIDRA_TYPEDEFS_H__
