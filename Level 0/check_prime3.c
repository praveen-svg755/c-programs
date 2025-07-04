#include<stdio.h>
#include<math.h>
void main(){
 int n, count = 0;
 scanf("%d",&n);

 for(int i=2 ; i<(sqrt(num)) ; i++){
        if(n%i == 0)  count++;        //  (!n%i)
 }

 printf((count == 0) ? "Is prime" : "Is Composite");

}



/*
Input: 7
output: Is prime
*/