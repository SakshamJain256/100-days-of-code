#include <stdio.h>

int main() {
    int i, j, space;

    space = 3;
    for (i = 1; i <= 7; i += 2) {
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
        space--;
    }

    space = 1;
    for (i = 5; i >= 1; i -= 2) {
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
        space++;
    }

    return 0;
}
