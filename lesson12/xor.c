/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : xor.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-29-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  ^^
 */

#include <stdio.h>

#define DIM(a)  ( sizeof(a) / sizeof(*a) )

int main(void)
{
    int a[] = {2, 4, 5, 4, 5, 5, 3, 2, 1, 1, 4, 7, 3, 1};   
    int find = 0;
    int i    = 0;

    for (i=0; i<DIM(a); i++) {
        find = find ^ a[i];
    }

    printf("find = %d\n", find);

    return 0;
}

/* end of file */