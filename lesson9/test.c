/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : test.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-27-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  continuation character
 */

#include <stdio.h>

#define SWAP(a, b) \
{                  \
    int temp = a;  \
    a = b;         \
    b = temp;      \
}

/**
 * \brief main entry
 */ 
 
int main(void)
{
    int x, y;

    x = 5;
    y = 9;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    SWAP(x, y);

    printf("\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    /* ASCII */
    printf("\n");
    printf("\101\n"); /* octonary */
    printf("\x41\n"); /* hexadecimal */
    
    return 0;
}

/* end of file */