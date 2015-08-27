/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : typedef.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-26-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */

#include <stdio.h>

typedef int INT32;
//typedef char*  PCHAR;  

#define PCHAR  char* 

/**
 * \brief main entry
 */ 
 
int main(void)
{

    PCHAR p1, p2;

    char c;

    p1 = &c;

    p2 = &c;

    printf("%d %d\n", p1, p2);
    
    return 0;
}

/* end of file */