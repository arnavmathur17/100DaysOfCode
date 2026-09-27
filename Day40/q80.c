// Q80: Multiply two matrices.

#include <stdio.h>

int main(){
    int n1, m1, n2, m2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &n1, &m1);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &n2, &m2);

    if(m1 != n2){
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[n1][m1], matrix2[n2][m2], result[n1][m2];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < m2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix to zero
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            for(int k = 0; k < m1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
