// Q63: Merge two arrays.


#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the total elements in the first array: ");
    scanf("%d", &a);

    int first[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &first[i]);
    }

    printf("Enter the total number of elements in second array: ");
    scanf("%d", &b);

    int snd[b];

    for (int i = 0; i < b; i++) {
        scanf("%d", &snd[i]);
    }

    int c[a + b];

    for (int i = 0; i < a; i++) {
        c[i] = first[i];
    }

    for (int i = 0; i < b; i++) {
        c[a + i] = snd[i];
    }

    printf("Merged array: ");

    for (int i = 0; i < a + b; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
