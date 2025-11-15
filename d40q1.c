#include <stdio.h>

int main() {
    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int mat[m][n];
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int d = 0; d < m + n - 1; d++) {
        int r = (d < n) ? 0 : d - n + 1;
        int c = (d < n) ? d : n - 1;

        while(r < m && c >= 0) {
            printf("%d ", mat[r][c]);
            r++;
            c--;
        }
    }

    return 0;
}
