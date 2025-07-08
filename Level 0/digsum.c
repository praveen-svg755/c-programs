#include<stdio.h>
int digSum(int n, int dig){
    int count = 0;
    while(n>0){
        int last = n%10;
        if(last == dig) count++;
        n = n/10;
    }
      
    
    return count;
}
int main(){
    int n , dig;
    scanf("%d%d",&n,&dig);
    
    printf("%d",digSum(n,dig));
    
    

}