#include<stdio.h>
int main(){
    int start , end ;
    scanf("%d%d",&start,&end);
    for(int i= start ; i<=end ; i=i+2){
        printf("%d ",i);
    }
}