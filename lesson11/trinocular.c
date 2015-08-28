/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : trinocular.c
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
 * \brief  a ? b : c
 */

#include <stdio.h>

#define MIN(A, B) (A <= B) ? (A) : (B)

#define MAX(A, B, C) (((A >= B) ? (A) : (B)) >= C) ? ((A >= B) ? (A) : (B)) : (C)

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 0;
    int d = 0;
    int e = 0;
    
    c = a < b ? a : b;
    
    //(a < b ? a : b) = 3; ----right or not ?
    *(a < b ? &a : &b) = 3;
    
    d = MIN(a, b);
    e = MAX(a, b, c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    
    return 0;
}

/* end of file */
