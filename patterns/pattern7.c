#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   for(int row=1;row<=num;row++)
    {
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

*
**
***
****
*****
