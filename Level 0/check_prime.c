#include<stdio.h>
void main(){
 int n count = 0;
 scanf("%d",&n);

 for(int i=1 ; i<=n ; i++){
        if(n%i == 0)  count++;
 }

 printf((count == 2) ? "Is prime" : "Is Composite");

}



/*
Input: 7
output: Is prime
*/