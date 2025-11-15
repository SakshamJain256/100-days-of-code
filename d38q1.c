#include <stdio.h>

int main() {
    int m1, n1, m2, n2, i, j;
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

    if(m1 != m2 || n1 != n2) {
        printf("Addition not possible");
        return 0;
    }

    int sum[m1][n1];
    for(i = 0; i < m1; i++)
        for(j = 0; j < n1; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    for(i = 0; i < m1; i++) {
        for(j = 0; j < n1; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
