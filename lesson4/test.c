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
 *      Date       : 03-17-2015
 *
 *      Description: just for test(May be wrong)
 ********************************************************************************
 */

#include <stdio.h>

void* mem(void* p, char v, int size)
{
   void* ret  = p;
   char* dest = (char*)p;
   int   i    = 0;

   for(i=0; i<size; i++) {
      dest[i] = v;
   }
   
   return ret;
}

int main(void)
{
   int a[5] = {1, 2, 3, 4, 5};
   int i = 0;
  
   for(i=0; i<5; i++) {
      printf("%d\n", a[i]);
   }

   mem(a, 0, sizeof(a));
  
   for(i=0; i<5; i++) {
      printf("%d\n", a[i]);
   }

   return 0;
}
