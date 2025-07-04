#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   for(int rows = 1 ; rows <= num ; rows++)
    {
      for(int col=1 ; col < 2*rows ; col++)
	{
         printf("*");
	}
	printf("\n");
    }
    return 0;
}

/*
OUTPUT:
5

*
***
*****
*******
*********
*/