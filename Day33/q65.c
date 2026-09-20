// Q65: Search in a sorted array using binary search.

#include <stdio.h>

// define the function for binary search
int bsearch(int arr[], int low, int high, int key);

int main(){
    int arr[100];
    int low, high, mid, key, n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    // Display the array
    printf("The elements of the array are: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    low = 0;
    high = n - 1;
    // Call the binary search function
    pos = bsearch(arr, low, high, key);
    
    if(pos == -1){
        printf("Element not found in the array\n");
    }
    else{
        printf("Element found at position: %d\n", pos);
    }
}

// define the function for binary search
int bsearch(int arr[], int low, int high, int key){
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
