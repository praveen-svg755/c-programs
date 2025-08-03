#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer"); 
    scanf("%d", &num); 

    int reversedNum = 0;
    int temp = num;

    while (temp != 0) {
        int digit = temp % 10;     
        reversedNum = reversedNum * 10 + digit; 
        temp /= 10;               
    }
    printf("%d\n", reversedNum); 
    return 0;
}