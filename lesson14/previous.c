/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : previous.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-30-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  . * -> [] ()
 */

#include <stdio.h>
#include <malloc.h>

typedef struct _demo
{
    int*  pInt;
    float f;
} Demo;

int func(int v, int m)
{

    return ( (v & m) != 0 ); //return (v & m != 0);
}

int main(void)
{
    Demo* pD = (Demo*)malloc( sizeof(Demo) );
    int* p[5];         //int *p[5];
    int* f();          //int *f();
    int i = 0;
    int j = 0;

    i = (1, 2);        //i = 1, 2;   
    j = (i<<3) + 3;    //j = j<<3+3;     

    pD->f = 0;         //*pD.f = 0;

    free(pD);

    return 0;
}

/* end of file */
