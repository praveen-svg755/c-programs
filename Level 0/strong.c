/*check a number is strong or not
Ex: 145 
=> 5! + 4! + 1! 
=> 120 + 24 + 1 
=> 145
*/


#include<stdio.h>
void main(){
 int num = 145;
 int sum=0 , safe = num;
 while(num>0){
   int dig = num%10;
   int start = 1 , fact = 1;
   while(start<=dig){
      fact *= start;
      start++;
   }
   sum += fact;
   num /= 10;
  }
  printf((safe == sum)? "Strong":"Not Strong");
  
   
 }

