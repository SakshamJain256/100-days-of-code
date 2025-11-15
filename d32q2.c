#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}, digit, maxDigit = 0, i;

    scanf("%lld", &n);

    if(n == 0) freq[0]++;

    while(n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for(i = 1; i < 10; i++) {
        if(freq[i] > freq[maxDigit])
            maxDigit = i;
    }

    printf("%d", maxDigit);
    return 0;
}

