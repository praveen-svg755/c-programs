/*
 check a is amstrong number or not
 Ex: 153
 => 1^3 + 5^3 = 3^3
 => 153
*/

#include<stdio.h>
void main(){
 int num = 153;
 int safe = num;
 int digits = log(num)+1;
 int sum = 0;
 while(num>0){
   int dig = num%10;
   num /=10;
   int exp = digits;
   int sol = 1;
   while(exp>0){
     sol*=dig;
     exp--;
   }
   sum +=sol;
 }
 printf((sum == safe)? "Is Amstrong":"Not Amstrong");

}