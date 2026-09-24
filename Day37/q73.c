// Q73: Find the sum of each row of a matrix and store it in an array

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

    int sum[n];
    for(int i = 0; i < n; i++){
        sum[i] = 0;
        for(int j = 0; j < k; j++){
            sum[i] += arr[i][j];
        }
    }

    // print the result 
    printf("The sum of all elements of each row of the matrix is: \n");
    for(int i = 0; i < n; i++){
        printf("Row %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}

