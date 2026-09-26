// Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int size, sum = 0;
    int matrix[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
	
    // Calculate sum of main diagonal elements
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}   
