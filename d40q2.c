#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j, k;
    scanf("%d %d", &m1, &n1);

    int mat1[m1][n1];
    for(i = 0; i < m1; i++)
        for(j = 0; j < n1; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &m2, &n2);
    int mat2[m2][n2];
    for(i = 0; i < m2; i++)
        for(j = 0; j < n2; j++)
            scanf("%d", &mat2[i][j]);

    if(n1 != m2) {
        printf("Multiplication not possible");
        return 0;
    }

    int res[m1][n2];
    for(i = 0; i < m1; i++)
        for(j = 0; j < n2; j++) {
            res[i][j] = 0;
            for(k = 0; k < n1; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }

    for(i = 0; i < m1; i++) {
        for(j = 0; j < n2; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}
