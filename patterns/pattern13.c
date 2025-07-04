#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int rows = num ; rows >= 1 ; rows--)
    {
        for (int spaces = 1; spaces <= rows-1; spaces++)
        {
            printf(" ");
        }
        for (int col = 1; col <= rows; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
