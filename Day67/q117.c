/* Q117: Write a program to take two sorted arrays of size m and n as input.
Merge both the arrays such that the merged array is also sorted. Print the
merged array.

Sample tests:
Input:  nums1 = [2,7,11,15] nums2 = [4,8,10]
Output: 2 4 7 8 10 11 15
Input:  nums1 = [1,2,7] nums2 = [9,10,17]
Output: 1 2 7 9 10 17
Input:  nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output: -10 -3 -2 -1 7 7
*/

#include <stdio.h>

int main(void) {
    int first[1000], second[1000];
    int m, n, i, j;
    int printed = 0;

    if (scanf("%d", &m) != 1 || m < 0 || m > 1000)
        return 0;
    for (i = 0; i < m; i++) {
        if (scanf("%d", &first[i]) != 1)
            return 0;
    }

    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
        return 0;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &second[i]) != 1)
            return 0;
    }

    i = 0;
    j = 0;
    while (i < m && j < n) {
        int value;

        if (first[i] <= second[j])
            value = first[i++];
        else
            value = second[j++];

        if (printed++)
            printf(" ");
        printf("%d", value);
    }

    while (i < m) {
        if (printed++)
            printf(" ");
        printf("%d", first[i++]);
    }
    while (j < n) {
        if (printed++)
            printf(" ");
        printf("%d", second[j++]);
    }
    printf("\n");
    return 0;
}
