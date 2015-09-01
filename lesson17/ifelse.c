/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : ifelse.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-01-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  #if   #else  #endif
 */

#include <stdio.h>

//gcc -DC=1 -o ifelse
#define C 1

int main(void)
{
    #if (C == 1)
        printf("This is first  printf...\n");
    #else
        printf("This is second printf...\n");
    //#endif

    return 0;
}

/* end of file */
