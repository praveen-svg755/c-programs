#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   for(int row=num;row>=1;row--)
    {
      for(int spaces=row+1;spaces<=num;spaces++)
	{
	 printf(" ");
	}
      for(int col=1;col<=row;col++)
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
 ****
  ***
   **
    *
