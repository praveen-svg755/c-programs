#include<stdio.h>
int digpro(int n){
    int product = 1;
    while(n>0){
        int last = n%10;
        printf("%d ",last);
        n = n/10;
    }
      
    
    return product;
}
int main(){
    int n ;
    scanf("%d",&n);
    
    printf("%d",digpro(n));
    
    

}