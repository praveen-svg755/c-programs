#include<stdio.h>
#include<math.h>
void main(){
 int lower,upper;
 scanf("%d",&n);
 for(num = (lower == 1)? lower+1 : lower ; num <= upper ; num++){
   int count = 0;
     for(int i=2 ; i<(sqrt(num)) ; i++){
        if(n%i == 0)  count++;        //  (!n%i)
     }
     (count == 0) && print("%d ",num);

  }

}



/*
Input: 7
output: 2 3 5 7 
*/