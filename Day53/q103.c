/* Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the
index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the
index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left.
This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. */

#include <stdio.h>

int main() {
    int n, i, j;
    int nums[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int pivot = -1;

    for (i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;

        for (j = 0; j < i; j++)          // sum of elements to the left
            leftSum += nums[j];

        for (j = i + 1; j < n; j++)      // sum of elements to the right
            rightSum += nums[j];

        if (leftSum == rightSum) {
            pivot = i;
            break;                       // leftmost pivot found
        }
    }

    printf("%d\n", pivot);
    return 0;
}
