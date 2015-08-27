/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : CheckCPU.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-24-2015
 *
 *      Description:
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  Check the CPU is Big Endian or Little Endian
 */

#include <stdio.h>

int CheckCPU(void)
{
    union CheckCPU{
        int  i;
        char c;
    } cc;

    cc.i = 1;

    return (1 == cc.c);
}

/**
 * \brief main entry
 */ 
 
int main(void)
{
    if (1 == CheckCPU()) {
        printf("CPU is Little Endian\n");
    } else {
        printf("CPU is Big Endian\n");
    }
    
    return 0;
}

/* end of file */