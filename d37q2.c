#include <stdio.h>

int main() {
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int mat[m][n], trans[n][m];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            trans[j][i] = mat[i][j];

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }

    return 0;
}
