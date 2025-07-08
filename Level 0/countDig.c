#include<stdio.h>
int countdig(int n){
    int count = 0;
    while(n>0){
      n /=10;
      count++;
    }
    return count;
}
int main(){
    printf("%d",countdig(2131));

}