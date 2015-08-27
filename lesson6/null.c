/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : SoftArray.c
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
 * \brief  SoftArray
 */

#include <stdio.h>
#include <malloc.h>

typedef struct _soft_array
{
    int len;
    int array[];
}SoftArray;

/**
 * \brief main entry
 */ 
 
int main(void)
{
    SoftArray* sa = (SoftArray*)malloc(sizeof(SoftArray) + sizeof(int) * 10);
    int i = 0;

    sa->len = 10;

    for (i=0; i<sa->len; i++) {
        sa->array[i] = i + 1;
    }

    for (i=0; i<sa->len; i++) {
        printf("sa->array[%d] = %d\n", i, sa->array[i]);
    }

    free(sa);
    
    return 0;
}

/* end of file */