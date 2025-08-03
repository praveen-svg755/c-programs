#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num1, num2;
    printf("Enter two integers ");
    scanf("%d%d", &num1, &num2); 

    if (num2 == 0) {
        printf("not allowed.\n"); 
    } else {
        int quotient = 0;
        int temp_num1 = abs(num1); 
        int temp_num2 = abs(num2);

        while (temp_num1 >= temp_num2) {
            temp_num1 -= temp_num2;
            quotient++; 
        }

       
        if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {
            printf("%d\n", -quotient); // Negative
        } else {
            printf("%d\n", quotient); // Positive 
        }
    }
    return 0;
}