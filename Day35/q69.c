// Q69: Find the second largest element in an array.

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

    int first, second;
    first = second = -1; // Initialize first and second largest

    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }

    if(second == -1){
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
