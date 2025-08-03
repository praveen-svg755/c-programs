#include <stdio.h>

int main()
{
    int num;
    printf("Enter a ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0\n");
    }
    else
    {
        int temp = num;
        while (temp != 0)
        {
            printf("%d ", temp % 10);
            temp /= 10;
        }
        printf("\n");
    }
    return 0;
}