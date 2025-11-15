#include <stdio.h>

int main() {
    int m, n, i, j, flag = 1;
    scanf("%d %d", &m, &n);

    int mat[m][n];
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(i = 0; i < m && i < n; i++) {
        for(j = i + 1; j < m && j < n; j++) {
            if(mat[i][i] == mat[j][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            break;
    }

    if(flag)
        printf("True");
    else
        printf("False");

    return 0;
}
