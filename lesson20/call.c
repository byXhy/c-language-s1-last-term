/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : call.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-03-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  #define CALL(f, p) 
 */

#include <stdio.h>

#define CALL(f, p) (printf("Call function %s\n", #f), f(p))

int square(int n)
{
    return n * n;
}

int f(int x)
{
    return x;
}

int main(void)
{   
    printf("1. %d\n", CALL(square, 4));

    printf("2. %d\n", CALL(f, 15));

    return 0;
}

/* end of file */
