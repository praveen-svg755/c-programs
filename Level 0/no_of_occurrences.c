#include <stdio.h>
int main() {
    long  num;
    int digitToCount;
    printf("Enter the number and the digit to count"); 
    scanf("%ld %d", &num, &digitToCount); 

    int count = 0;
    if (num == 0) {
        if (digitToCount == 0) {
            count = 1; 
        }
    } else {
        long long temp = num;
        while (temp != 0) {
            if (temp % 10 == digitToCount) {
                count++; 
            }
            temp /= 10;
        }
    }
    printf("%d\n", count); 
    return 0;
}