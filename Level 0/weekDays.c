/*
print week days as given input 
if out of range print in valid
*/

#include<stdio.h>
int main(){
    int week;
    scanf("%d",&week);

    switch (week)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    
    default:
       printf("In valid");
    }
}