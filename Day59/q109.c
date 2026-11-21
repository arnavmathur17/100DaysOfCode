/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of
size k. */

#include <stdio.h>

int main(void) {
    int n, k;

    // Input format: n, then n integers, then k
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 1;
    }

    long long windowSum = 0;
    for (int i = 0; i < k; i++) windowSum += arr[i];

    long long maxSum = windowSum;
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];   // slide the window
        if (windowSum > maxSum) maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}
