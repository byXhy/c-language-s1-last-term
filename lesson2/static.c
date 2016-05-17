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
 *      Description: Modified in 05-12-2016
 ********************************************************************************
 */
 
#include <stdio.h>

//auto     int g = 0;   (false)
 
//register int m = 0;   (false)

int n = 0;

//extern x;             (false)
//extern func();        (false)

extern func1();

void f1(void)
{
   int i = 0;
   
   i++;

   printf("i = %d\n", i);
 
}

void f2(void)
{
   static int i = 0;
   
   i++;

   printf("i = %d\n", i);
 
}

int main(void)
{
    auto     int i = 0;
    register int j = 0;
    static   int k = 0;
    
    for (k=0; k<5; k++) {
        f1();
    }
    printf("\n");

    for (k=0; k<5; k++) {
        f2();
    }
    printf("\n");

    printf("func1() = %d\n", func1());
    printf("\n");

    printf("&i = %0x\n", &i);
//  printf("&j = %0x\n", &j);        (false)
    printf("&k = %0x\n", &k);

    return 0;
}
