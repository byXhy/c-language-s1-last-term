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
 *      Description:
 ********************************************************************************
 */
 
#include <stdio.h>

typedef int           INT32;
typedef long          LONG16;
typedef double        DOUBLE;   
typedef unsigned char BYTE;
typedef struct _demo {
    short  s;
    BYTE   b1;
    BYTE   b2;
    INT32  i;
    LONG16 j;
    DOUBLE k;
} DEMO;

int main(void)
{
    INT32   i32;
    BYTE    byte;
    LONG16  long16;
    DOUBLE  b;
    DEMO    d;
    
    printf("%d, %d\n", sizeof(INT32),  sizeof(i32));
    printf("%d, %d\n", sizeof(BYTE),   sizeof(byte));
    printf("%d, %d\n", sizeof(DEMO),   sizeof(d));
    printf("%d, %d\n", sizeof(LONG16), sizeof(long16));
    printf("%d, %d\n", sizeof(DOUBLE), sizeof(b));

    return 0;
}
