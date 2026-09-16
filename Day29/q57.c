// Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int size, i;
    int sum = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    
    return 0;
}   
