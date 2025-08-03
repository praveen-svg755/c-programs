#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d%d", &n1, &n2);

    int max = (n1 > n2) ? n1 : n2;
    int lcm;

    for (lcm = max;; lcm += max)
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
        {
            printf("%d\n", lcm);
            break;
        }
    }
    return 0;
}