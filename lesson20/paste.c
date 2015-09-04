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
 * \brief  #define NAME(n) name##n
 */

#include <stdio.h>

#define NAME(n) name##n

int main(void)
{   
    int NAME(1);
    int NAME(2);

    NAME(1) = 9;
    NAME(2) = 5;

    printf("%d\n", NAME(1));
    printf("%d\n", NAME(2));

    return 0;
}

/* end of file */
