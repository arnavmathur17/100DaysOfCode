/* Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray
using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative)
element. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n, i;
    int current, best;

    scanf("%d", &n);
    if (n <= 0) return 1;

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    current = arr[0];
    best = arr[0];

    for (i = 1; i < n; i++) {
        if (current + arr[i] > arr[i])
            current = current + arr[i];   // extend the subarray
        else
            current = arr[i];             // start a new subarray here

        if (current > best)
            best = current;
    }

    printf("%d\n", best);
    return 0;
}
