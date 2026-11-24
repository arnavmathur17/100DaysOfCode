/* Q118: Write a program to take an input array of size n. The array should
contain all the integers between 0 to n except for one. Print that missing
number.

Sample tests:
Input:  nums1 = [0,3,2,4]
Output: 1
Input:  nums1 = [1,2,3]
Output: 0
Input:  nums1 = [0,4,3,1,5]
Output: 2
*/

#include <stdio.h>

int main(void) {
    int n, i, value;
    long long expected_sum, actual_sum = 0;

    if (scanf("%d", &n) != 1 || n < 0 || n > 100000)
        return 0;

    for (i = 0; i < n; i++) {
        if (scanf("%d", &value) != 1)
            return 0;
        actual_sum += value;
    }

    expected_sum = (long long)n * (n + 1) / 2;
    printf("%lld\n", expected_sum - actual_sum);
    return 0;
}
