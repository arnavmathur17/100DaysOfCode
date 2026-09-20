// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main(){
    int arr[100]; // Assuming a maximum of 100 elements
    int n, i, pos, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &key);

    // Find the correct position
    while (pos < n && arr[pos] < key) {
        pos++;
    }

    // shift elements to the right
    for(i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    // insert the element at the correct position
    arr[pos] = key;
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}
