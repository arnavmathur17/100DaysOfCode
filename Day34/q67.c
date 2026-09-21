// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main(){
    int n, pos, element;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Increase the size of the array by 1 to accommodate the new element

    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the new element (0 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n){
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Shift elements to the right to make space for the new element
    for(int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = element; // Insert the new element at the specified position
    printf("Array after insertion: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
