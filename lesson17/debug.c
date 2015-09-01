/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : debug.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-01-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  #if   #else  #endif
 */

#include <stdio.h>

#ifdef DEBUG 
    #define LOG(s) printf("[%s:%d] %s...\n\n", __FILE__, __LINE__, s)
#else
    #define LOG(s) NULL
#endif

#ifdef PRO 
void f(void)
{
    printf("This is pro project !\n");
}
#else
void f(void)
{
    
}
#endif

int main(void)
{
    LOG("Enter main()");

    f();

    printf("1. menu_1...\n");
    printf("2. menu_2...\n");
    printf("3. menu_3...\n");

    #ifdef PRO
    printf("4. menu_4...\n");
    printf("5. menu_5...\n");
    printf("6. Exit.....\n");
    #else
    printf("4. Exit.....\n");
    #endif
    
    LOG("Exit  main()");

    return 0;
}

/* end of file */
