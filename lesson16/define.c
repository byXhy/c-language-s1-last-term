/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : define.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 08-30-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */

#include <stdio.h>

#define ERROR          -1
#define PI             3.1415126
#define PATH_1         "D:\xyz"

#define PATH_2         D:\xyz
#define PATH_3         D:\xyz\

#define SUM1(a, b)     (a) + (b)
#define SUM2(a, b)     ((a) + (b))
#define MIN(a, b)      ((a < b) ? (a) : (b))
#define DIM(array)     (sizeof(array) / sizeof(*array))

#define FAC(n)         ((n>0) ? (FAC(n-1) + n) : 0 )  

int sum(int a, int b)
{
    return (a + b);
}

int min(int a, int b)
{
    return ((a < b) ? (a) : (b));
}

int dim(int array[])
{
    return (sizeof(array) / sizeof(*array));
}

int main(void)
{
    printf("SUM1(1,2)+SUM1(1,2) = %d\n", SUM1(1, 2) * SUM1(1, 2));
    printf("SUM2(1,2)+SUM2(1,2) = %d\n", SUM2(1, 2) * SUM2(1, 2));
    printf("sum(1,2) + sum(1,2) = %d\n", sum(1, 2)  * sum(1, 2));

    printf("\n");
    int i = 1;
    int j = 2;
    int k = 1;
    int l = 2;
    printf("MIN(i++, j) = %d\n", MIN(i++, j));
    printf("min(k++, l) = %d\n", min(k++, l));

    printf("\n");
    int a[] = {1, 2, 3}; 
    printf("DIM(array) = %d\n", DIM(a));
    printf("dim(array) = %d\n", dim(a));

    printf("\n");
    printf("FAC(20) = %d\n", FAC(20)); //undefined reference to `FAC'
    
    return 0;
}

/* end of file */
