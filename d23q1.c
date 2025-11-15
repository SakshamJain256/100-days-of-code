#include <stdio.h>

int main() {
    int n, i, num = 2, den = 3;
    float sum = 0.0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Approximate sum: %.2f", sum);
    return 0;
}
