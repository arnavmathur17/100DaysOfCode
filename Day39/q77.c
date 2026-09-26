// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main(){
    int n, k;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1; // Flag to check if diagonal elements are distinct
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(matrix[i][i] == matrix[j][j]){
                distinct = 0; // Found duplicate diagonal elements
                break;
            }
        }
        if(!distinct){
            break;
        }
    }

    if(distinct){
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0;
}
