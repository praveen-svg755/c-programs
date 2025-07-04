/*
Input: 25 98
Output:
 00025
    98

*/

#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%0.5d\n",a);
    printf("%5d",b);
}