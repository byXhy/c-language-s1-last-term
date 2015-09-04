/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : error.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-02-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  #erro   #waring  #line
 */

#include <stdio.h>

#line 10 "line.c"

#define STR "test"
//gcc -DSTR="test"    ??    gcc -DSTR=\"test\" 


void f(void);

int main(void)
{
    #ifndef COMMAND
    #waring Compilation will be stoped...
    #error  No defined Constant symbol COMMAND
    #endif

    printf("%s...\n", COMMAND);
    printf("This is first  printf...\n");
    printf("This is second printf...\n");

    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);

    return 0;
}


#line 1 "line.c"
void f(void)
{
    //a+b;
}

/* end of file */
