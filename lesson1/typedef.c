/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : sizeof.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 03-14-2015
 *
 *      Description: Modified in 05-11-2016
 ********************************************************************************
 */
 
#include <stdio.h>

typedef unsigned char BYTE;
typedef short         SHORT;
typedef int           INT32;
typedef long          LONG16;
typedef double        DOUBLE;   

typedef struct _demo {
    SHORT  s;
    BYTE   b1;
    BYTE   b2;
    INT32  i;
    LONG16 j;
    DOUBLE k;
} DEMO;

int main()
{
    BYTE    byte;
    SHORT   s;
    INT32   i32;
    LONG16  long16;
    DOUBLE  b;
    DEMO    d;
    
    printf("sizeof(BYTE)   = %d, sizeof(byte)   = %d\n", sizeof(BYTE),   sizeof(byte));
    printf("sizeof(SHORT)  = %d, sizeof(s)      = %d\n", sizeof(SHORT),  sizeof(s));
    printf("sizeof(INT32)  = %d, sizeof(i32)    = %d\n", sizeof(INT32),  sizeof(i32));
    printf("sizeof(LONG16) = %d, sizeof(long16) = %d\n", sizeof(LONG16), sizeof(long16));
    printf("sizeof(DOUBLE) = %d, sizeof(b)      = %d\n", sizeof(DOUBLE), sizeof(b));
    printf("sizeof(DEMO)   = %d, sizeof(d)      = %d\n", sizeof(DEMO),   sizeof(d));

    return 0;
}
