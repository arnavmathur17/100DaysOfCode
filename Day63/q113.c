/* Q113: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the kth smallest element in the array. Print the kth smallest
element as output. */

#include <stdio.h>

int main(void) {
    int arr[1000];
    int n, k, i, j, temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    if (n <= 0 || k < 1 || k > n)
        return 0;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}
