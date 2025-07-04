#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   for(int rows = num ; rows <=1 ; rows++)
    {
      for(int spaces = rows+1 ; spaces <= num ; spaces++)
	{
	 printf(" ");
	}
      for(int col=1 ; col < 2*rows ; col++)
	{
         printf("*");
	}
	printf("\n");
    }
    return 0;
}
