// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    int n, m;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for(int d = 0; d < n + m - 1; d++){
        for(int i = 0; i < n; i++){
            int j = d - i;
            if(j >= 0 && j < m){
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
