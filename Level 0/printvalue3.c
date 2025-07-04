/*
Input: 20
Output: +20
*/

#include<stdio.h>
int main(){
    int a;
    scanf(" %d",&a);
    if(a>=0)
     printf("+%d",a);
    else
     printf("%d",a);
}