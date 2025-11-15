#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 1) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    
    printf("%d", product);

    return 0;
}

