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

int main(void)
{
    char   c = 0;
    short  s = 0;
    int    i = 0;
    double j = 0;
 
    printf("sizeof(char)   = %d, sizeof(c) = %d\n", sizeof(char),   sizeof(c));
    printf("sizeof(short)  = %d, sizeof(s) = %d\n", sizeof(short),  sizeof(s));
    printf("sizeof(int)    = %d, sizeof(i) = %d\n", sizeof(int),    sizeof(i));
    printf("sizeof(double) = %d, sizeof(j) = %d\n", sizeof(double), sizeof(j));

    return 0;
}
