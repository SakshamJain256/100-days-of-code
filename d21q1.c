#include <stdio.h>

int main() {
    int n, first, last, temp, pow = 1;
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }
    first = temp;

    if (pow == 1) {
        printf("%d", n);
        return 0;
    }

    int middle = n % pow;
    middle = middle / 10;

    int result = last * pow + middle * 10 + first;

    printf("%d", result);

    return 0;
}
