#include <stdio.h>
#include <stdbool.h>

bool isPrimeDigit(int digit)
{
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int main()
{
    int num;
    printf("Enter a ");
    scanf("%d", &num);

    printf("Prime digits: ");
    if (num == 0)
    {
    }
    else
    {
        int temp = num;
        while (temp != 0)
        {
            int digit = temp % 10;
            if (isPrimeDigit(digit))
            {
                printf("%d ", digit);
            }
            temp /= 10;
        }
    }
    printf("\n");
    return 0;
}