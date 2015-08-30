/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : implicit.c
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
 * \brief  (char, short)->int->unsigned int->long->unsigned long->double<-float
 */

#include <stdio.h>

int main(void)
{
    char c = 'c';
    short s = 0;

    s = c;
    printf("sizeof(s)   = %d\n", sizeof(s));
    printf("sizeof(s+c) = %d\n", sizeof(s+c));

    printf("\n");
    int i = -2;
    unsigned int j = 1;

    if ( (i+j) >= 0 ) {
        printf("i+j >= 0\n");
    } else {
        printf("i+j < 0\n");
    }

    printf("i+j = %d\n", i+j);

    printf("i+j = %0X\n", i+j);
    
    return 0;
}

/* end of file */
