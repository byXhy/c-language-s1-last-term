/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : const.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 03-25-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */

#include <stdio.h>

int main(void)
{
    int i = 1;

    const int* const p = &i;    
    
    *p  = 3;

    p = NULL;

    printf("%d\n", i);
    
    return 0;
}




