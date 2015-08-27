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

SoftArray* create_soft_array(int size)
{
    SoftArray* ret = NULL;

    if (size > 0) {
        ret = (SoftArray*)malloc(sizeof(*ret) + sizeof(*(ret->array)) * size);
        ret->len = size;
    }

    return ret;
}

void fac(SoftArray* sa)
{
    int i = 0;a

    if (NULL != sa) {
        if (1 == sa->len) {
            sa->array[0] = 1;
        } else {
            sa->array[0] = 1;
            sa->array[1] = 1;

            for (i=2; i<sa->len; i++) {
                sa->array[i] = sa->array[i-1] + sa->array[i-2];
            }
        }
    }
    
}

void delete_soft_array(SoftArray* sa)
{
    free(sa);
}

/**
 * \brief main entry
 */ 
 
int main(void)
{
    SoftArray* sa = create_soft_array(10);
    int i = 0;

    fac(sa);

    for (i=0; i<sa->len; i++) {
        printf("sa->array[%d] = %d\n", i, sa->array[i]);
    }

    delete_soft_array(sa);

    return 0;
}

/* end of file */