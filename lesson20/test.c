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
 *      Date       : 09-03-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  just for test a[] = {'a', 'b', 'c'}; not lesson20
 */

#include <stdio.h>

int main(void)
{   
    char a[] = {'a', 'b', 'c'};
    printf("%s\n", a);         // ??

    printf("\n");
    char b[] = {'a', 'b', 'c', '\0'};
    printf("%s\n", b);

    printf("\n");
    char c[] = "abc";
    printf("%s\n", c);

    printf("\n");
    char* str = c;
    printf("%s\n", str);

    printf("\n");
    char* string = (char*)"Zeen";
    printf("%s\n", string); 

    return 0;
}

/* end of file */
