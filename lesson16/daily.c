/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : daily.c
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
 * \brief  
 */

#include <stdio.h>
#include <time.h>

#define LOG(s) do{                                                   \
    time_t t;                                                        \
    struct tm* ti;                                                   \
    time(&t);                                                        \
    ti = localtime(&t);                                              \
    printf("%s[%s:%d]\n%s...\n", asctime(ti), __FILE__, __LINE__, s);\
} while (0)

void log(char* s)
{
    printf("%s:%d %s...\n", __FILE__, __LINE__, s);
}

void func(void)
{
    printf("Enter func()\n");
   
    printf("Exit  func()\n");
}

int main(void)
{
    printf("%s:%d Enter main()...\n", __FILE__, __LINE__);
    func();
    printf("%s:%d Exit  main()...\n", __FILE__, __LINE__);

    printf("\n");
    log("Enter main()...");
    func();
    log("Eixt main()...");

    printf("\n");
    LOG("Enter main()...");
    func();
    LOG("Eixt main()...");

    printf("\n");
    printf("%s \n%d \n%s \n%s \n%d \n", __FILE__, __LINE__, 
                                        __DATE__, __TIME__, 
                                        __STDC__);       
    return 0;
}

/* end of file */
