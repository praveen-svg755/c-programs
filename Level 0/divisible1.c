/*
check a number is divisible by 3 or not

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int remender = n % 3;

    if (n % 3 == 0)
    {
        printf("Number is divisible by 3");
    }
    else
    {
        printf("Number is not divisible by 3 and gives remender %d", remender);
    }
}