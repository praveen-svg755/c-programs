// Cross pattern

#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   for(int row=1;row<=num;row++)
    {
      for(int spaces=rows+1;spaces<=num;spaces++)
      {
       printf(" ");
      }
      for(int col=1;col<=num;col++)
	{
         printf("*");
	}
	printf("\n");
    }
    return 0;
}

OUTPUT:
5

    *****
   *****
  *****
 *****
*****