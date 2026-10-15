/* Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last
occurrence. Print -1, -1 if the target is not present */

#include <stdio.h>
int firstOccurrence(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid; // Update result and search in the left half
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid; // Update result and search in the right half
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main(){
    int size;
    
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter the elements of the sorted array: "); // Must include some repeated elements
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }
    
    int target = 2;

    int firstIndex = firstOccurrence(nums, size, target);
    int lastIndex = lastOccurrence(nums, size, target);

    printf("First occurrence of %d is at index: %d\n", target, firstIndex);
    printf("Last occurrence of %d is at index: %d\n", target, lastIndex);

    return 0;
}
