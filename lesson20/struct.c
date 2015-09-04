/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : struct.c
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
 * \brief  #define NAME(n) name##n
 */

#include <stdio.h>

/*
typedef struct _tag_Student Student;
struct _tag_Student
{
    char* name;
    int   id;
};
*/

#define STRUCT(type) typedef struct _tag_##type type;\
struct _tag_##type

STRUCT(Student)
{
    char* name;
    int   id;
};

int main(void)
{   
    Student s1;
    Student s2;

    s1.name = "MaZhe"; //char a[] = {'a', 'b', 'c'};
    s1.id   = 1;

    s2.name = "LiGui";
    s2.id   = 2;

    printf("s1.name = %s \nid = %d\n", s1.name, s1.id);
    printf("s2.name = %s \nid = %d\n", s2.name, s2.id);

    return 0;
}

/* end of file */
