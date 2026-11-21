/* Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each
subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. */

#include <stdio.h>

int main() {
    int arr[1000];
    int n, k, i, j, max;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 1;
    }

    for (i = 0; i <= n - k; i++) {
        max = arr[i];
        for (j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }
        if (i > 0) printf(" ");
        printf("%d", max);
    }
    printf("\n");

    return 0;
}
