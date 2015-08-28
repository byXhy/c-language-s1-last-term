/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : or.c
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
 * \brief  ||
 */

#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    int x = 0;
    int y = 0;

    if (++i > 0 || ++j > 0) {
        printf("i = %d  j = %d\n", i, j);
    }
    
    if (++x > 1 || ++y > 0) {
        printf("x = %d  y = %d\n", x, y);
    }

    return 0;
}

/* end of file */