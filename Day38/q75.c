// Q75: Add two matrices.

#include <stdio.h>

int main(){
    int n, o, p, q;
    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &o);

    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &q);

    printf("Enter the elements of first matrix: \n");
    int arr1[n][o];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    int arr2[p][q];
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    // check if the matrices can be added
    if(n != p || o != q){
        printf("The matrices cannot be added as they have different dimensions.\n");
        return 0;
    }

    // add the matrices
    int sum[n][o];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Print the result matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
