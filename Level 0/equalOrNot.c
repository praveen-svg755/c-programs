/*
Input:
122
675
Output: Not equal

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("Equal");
    else
        printf("Not equal");
}