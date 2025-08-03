#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer  "); 
    scanf("%d", &n); 

    for (int i = 0; i < n; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            printf("%c ", c); 
        }
        printf("\n"); 
    }
    return 0;
}