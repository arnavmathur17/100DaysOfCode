// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int isSymmetric = 1; // Assume symmetric until proven otherwise

    // 1. Input dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. Check if square
    if (rows != cols) {
        printf("Matrix is not square, thus cannot be symmetric.\n");
        return 0;
    }

    int matrix[100][100]; // Assuming max size 100x100

    // 3. Input elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Check symmetry: A[i][j] must equal A[j][i]
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // 5. Output result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}   
