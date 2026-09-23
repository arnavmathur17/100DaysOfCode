// Q71: Read and print a matrix.

#include <stdio.h>

int main(){
    int n, k;
    int arr[n][k];

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &k);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
