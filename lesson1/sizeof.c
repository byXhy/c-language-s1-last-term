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

int main(void)
{
    char  c = 0;
    short s = 0;
    int   i = 0;
    double j = 0;
 
    printf("%d, %d\n", sizeof(char), sizeof(c));
    printf("%d, %d\n", sizeof(short), sizeof(s));
    printf("%d, %d\n", sizeof(int), sizeof(i));
    printf("%d, %d\n", sizeof(double), sizeof(j));

    return 0;
}
