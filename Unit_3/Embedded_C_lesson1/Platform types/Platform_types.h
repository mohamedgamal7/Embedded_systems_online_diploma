/************************************************************************/
/*Author: MOhamed Gamal 												*/
/*Description: Platform Types											*/
/*Date: 05 Jul 2023														*/
/*Version:	V01															*/
/************************************************************************/

#ifndef Platform_types_H
#define Platform_types_H

typedef unsigned char uint8_t
typedef unsigned short uint16_t
typedef unsigned int uint32_t
typedef unsigned long long uint64_t

typedef signed char sint8_t
typedef signed short sint16_t
typedef signed int sint32_t
typedef signed long long sint64_t

typedef _Bool boolean

typedef volatile unsigned char vuint8_t
typedef volatile unsigned short vuint16_t
typedef volatile unsigned int vuint32_t
typedef volatile unsigned long long vuint64_t

typedef volatile signed char vsint8_t
typedef volatile signed short vsint16_t
typedef volatile signed int vsint32_t
typedef volatile signed long long vsint64_t


#ifndef TRUE
#define TRUE 1
#endif 

#ifndef FALSE
#define FAlSE 0
#endif

#endif