/* Q119: Write a program to take an integer array as input. Only one element
will be repeated. Print the repeated element. Try to find the result in one
single iteration.

Sample tests:
Input:  nums1 = [1,3,3,4]
Output: 3
Input:  nums1 = [1,2,2]
Output: 2
Input:  nums1 = [0,4,1,1,5]
Output: 1
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int values[10000];
    int n, i, duplicate = 0, found = 0;
    size_t capacity, index;
    int *keys;
    unsigned char *occupied;

    if (scanf("%d", &n) != 1 || n <= 0 || n > 10000)
        return 0;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1)
            return 0;
    }

    capacity = (size_t)n * 2 + 1;
    keys = malloc(capacity * sizeof(*keys));
    occupied = calloc(capacity, sizeof(*occupied));
    if (keys == NULL || occupied == NULL) {
        free(keys);
        free(occupied);
        return 1;
    }

    for (i = 0; i < n; i++) {
        index = ((unsigned int)values[i] * 2654435761u) % capacity;
        while (occupied[index] && keys[index] != values[i])
            index = (index + 1) % capacity;

        if (occupied[index]) {
            duplicate = values[i];
            found = 1;
            break;
        }

        occupied[index] = 1;
        keys[index] = values[i];
    }

    printf("%d\n", found ? duplicate : -1);
    free(keys);
    free(occupied);
    return 0;
}
