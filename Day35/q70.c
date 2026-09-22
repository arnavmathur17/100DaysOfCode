// Q70: Rotate an array to the right by k position.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array of size n
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Normalize k to be within the bounds of the array size
    k = k % n;
    
    // Rotate the array to the right by k positions
    int temp[n]; // Temporary array to hold rotated values
    for(int i = 0; i < n; i++){
        temp[(i + k) % n] = arr[i];
    }

    // Copy the rotated values back to the original array
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }  

    // Print the rotated array
    printf("The rotated array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
