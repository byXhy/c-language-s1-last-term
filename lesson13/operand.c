/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : operand.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-30-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  ++   -- operation
 */

#include <stdio.h>

int main(void)
{
    int i = 3;
    int x = (++i) + (++i) + (++i);
    printf("x = %d\n", x);

    int j = 4;
    int y = (++j, j++, j+10);
    printf("y = %d\n", y);

    // int k = 5;
    // int z = ++k+++k+++k;
    // printf("z = %d\n", z);

    int a = 3;
    int b = 4;
    int c = 5;
    int d = 8;

    int e = a+++b;
    printf("e = %d\n", e);

    int f = ++c+d;
    printf("f = %d\n", f); 

    int* p = &b;
    int  g = d / *p;     /* int g = d/*p; */
    printf("g = %d\n", g);

    return 0;
}

/* end of file */
