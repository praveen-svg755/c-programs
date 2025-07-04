/*
leap year or not

*/

#include <stdio.h>
#include <math.h>
int main()
{
   int year, flag = 0;
   scanf("%d",&year);
   if(year%400 == 0) flag = 1;
   else if(year%100 == 0) flag = 0;
   else if(year%4 == 0) flag = 1;
   else flag = 0;

  printf( (flag)? "leap Year" : "Not a leap year");
}