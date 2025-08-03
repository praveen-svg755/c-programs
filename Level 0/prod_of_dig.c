#include <stdio.h>
int main()
{
    int num;
    printf("Enter a ");
    scanf("%d", &num);

    int product = 1;
    if (num == 0)
    {
        product = 0;
    }
    else
    {
        int temp = num;
        while (temp != 0)
        {
            product *= (temp % 10);
            temp /= 10;
        }
    }
    printf("%d\n", product);
    return 0;
}