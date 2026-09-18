// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {

    int n;

    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    int freq[10] = {0};

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int max = 0;
    int digit = 0;

    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    }

    printf("The most occurring digit is: %d\n", digit);
    printf("It occurs %d times\n", max);

    return 0;
}
