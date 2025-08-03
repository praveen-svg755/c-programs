#include <stdio.h>

int main() {
    int limit;
    scanf("%d", &limit); 

    int sum_even = 0;
    for (int i = 2; i <= limit; i += 2) { 
        sum_even += i; 
    }
    printf("%d\n", sum_even); 
    return 0;
}