/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : swap.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-29-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  ^^^^
 */

#include <stdio.h>

#define SWAP1(a, b) \
{                   \
    int temp = a;   \
    a = b;          \
    b = temp;       \
}

#define SWAP2(a, b) \
{                   \
    a = a + b;      \
    b = a - b;      \
    a = a - b;      \
}

#define SWAP3(a, b) \
{                   \
    a = a ^ b;      \
    b = a ^ b;      \
    a = a ^ b;      \
}

int main(void)
{
    int x = 5;
    int y = 9;
    printf("x = %d y = %d\n", x, y);

    printf("\n");
    SWAP1(x, y);
    printf("x = %d y = %d\n", x, y);

    printf("\n");
    SWAP2(x, y);
    printf("x = %d y = %d\n", x, y);

    printf("\n");
    SWAP3(x, y);
    printf("x = %d y = %d\n", x, y);

    return 0;
}
/* end of file */