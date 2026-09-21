// Q68: Delete an element from an array.

#include <stdio.h>

int main(){
    int n, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Create an array of size n

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to be deleted (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to remove the element at the specified position
    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion: ");
    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
