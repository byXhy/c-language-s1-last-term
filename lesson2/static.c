/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : static.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 03-15-2015
 *
 *      Description:
 ********************************************************************************
 */
 
#include <stdio.h>

int g = 0;
int m = 0;

extern func1();

void f1(void)
{
   int i = 0;
   
   i++;

   printf("%d\n", i);
 
}

void f2(void)
{
   static int i = 0;
   
   i++;

   printf("%d\n", i);
 
}

int main(void)
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    
    printf("%d\n", func1());

    return 0;
}
