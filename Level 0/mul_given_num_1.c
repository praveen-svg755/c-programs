#include <stdio.h>
#include <stdlib.h> 

int main() {
    int num1, num2;
    
    scanf("%d%d", &num1, &num2); 

    int product = 0;
    int abs_num1 = abs(num1); 
    int abs_num2 = abs(num2);

    for (int i = 0; i < abs_num2; i++) {
        product += abs_num1;
    }

   
    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {
        printf("%d\n", -product); //  negative.
    } else {
        printf("%d\n", product); //  positive.
    }
    return 0;
}