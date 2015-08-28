/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : and.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-28-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  &&
 */

#include <stdio.h>

int g = 0;
int h = 0;

int func1(void)
{
    printf("Enter func1()!\n");

    return g++;
}

int func2(void)
{
    printf("Enter func2()!\n");

    return ++h;
}

int main(void)
{
    if ( func1() && func1() ) {
        printf("g = %d   from if ()\n", g);
    }
    
    printf("g = %d\n", g);

    printf("\n");

    if ( func2() && func2() ) {
        printf("h = %d   from if ()\n", h);
    }
    
    printf("h = %d\n", h);
    
    return 0;
}

/* end of file */
