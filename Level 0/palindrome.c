#include <stdio.h>
#include <stdbool.h>

int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter an integer  "); 
    scanf("%d", &num); 

    if (num == reverseNumber(num)) { 
        printf("Palindrome\n");    
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}