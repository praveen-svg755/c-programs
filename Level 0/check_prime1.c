#include<stdio.h>
void main(){
 int n ,count = 0;
 scanf("%d",&n);

 for(int i=2 ; i<n ; i++){
        if(n%i == 0)  count++;
 }

 printf((count == 0) ? "Is prime" : "Is Composite");

}



/*
Input: 7
output: Is prime
*/