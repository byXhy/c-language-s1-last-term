/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : enum.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-26-2015
 *
 *      Description:
 ********************************************************************************
 */
 
#include <stdio.h>

enum color {
    red,
    bule = 3,
    black,
};

/**
 * \brief main entry
 */ 
 
int main(void)
{
    enum color c = red;
    enum color d = bule;
    enum color e = black;

    printf("%d\n", red);
    printf("%d\n", bule);
    printf("%d\n", black);
    
    return 0;
}

/* end of file */