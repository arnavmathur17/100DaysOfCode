// Q74: Find the transpose of a matrix.

#include <stdio.h>

int main(){
    int n, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &k);

    int arr[n][k];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // print the transpose of the matrix
    printf("The transpose of the matrix is: \n");
    for(int j = 0; j < k; j++){
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
