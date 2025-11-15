#include <stdio.h>

int main() {
    int i, j, spaces;
    for(i = 5; i >= 1; i--) {
        spaces = 5 - i;
        for(j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
