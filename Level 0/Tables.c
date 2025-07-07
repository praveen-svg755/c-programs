/*
6 5
1 x 5 = 5
2 x 5 = 10
3 x 5 = 15
4 x 5 = 20
5 x 5 = 25
6 x 5 = 30
*/

#include<stdio.h>
int main(){
    int range , table ;
    scanf("%d%d",&range,&table);
    for(int i= 1 ; i<=range ; i++){
        printf("%d x %d = %d \n",i,table,i*table);
    }
}