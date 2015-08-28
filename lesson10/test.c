/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : test.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-27-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  ''  vs  ""
 */

#include <stdio.h>

int main(void)
{
    char* p1 = 1;
    char* p2 = '1';
    char* p3 = "1";

    printf("%s, %s, %s", p1, p2, p3);//

    printf('\n');//

    printf("\n");
    
    return 0;
}

/* end of file */