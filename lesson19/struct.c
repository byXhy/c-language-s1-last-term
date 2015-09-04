/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : struct.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-02-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  memory space ??
 */

#include <stdio.h>

struct test1
{
    char c1;
    short s;
    char c2; 
    int i;
};

struct test2
{
    char c1;
    char c2;
    short s;
    int i;
};

int main(void)
{   
    printf("sizeof(struct test1) = %d\n", sizeof(struct test1));

    printf("sizeof(struct test2) = %d\n", sizeof(struct test2));

    return 0;
}

/* end of file */
