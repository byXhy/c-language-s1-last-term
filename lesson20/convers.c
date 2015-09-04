/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : convers.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-02-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  #define CONVERS(x) #x
 */

#include <stdio.h>

#define CONVERS(x) #x

int main(void)
{   
    printf("%s\n", CONVERS(Hello Xhy!));
    
    printf("%s\n", CONVERS(100));

    printf("%s\n", CONVERS(while));

    printf("%s\n", CONVERS(return));

    return 0;
}

/* end of file */
