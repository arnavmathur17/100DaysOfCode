/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int n = 3; 
    int i, j, stars;

    for (i = 1; i <= n; i++) {
        stars = 2 * i - 1;

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        printf("\n"); 
    }

    for (i = n - 1; i >= 1; i--) {
        stars = 2 * i - 1;

        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }

        if (i != 1) {
            printf("\n"); 
        }
    }

    return 0;
}
