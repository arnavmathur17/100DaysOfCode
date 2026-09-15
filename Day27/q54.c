/* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    for (i = 1; i <= 7; i++) {

        if (i <= 4) {
            spaces = 4 - i;
            stars = 2 * i - 1;
        } else {
            spaces = i - 4;
            stars = 2 * (8 - i) - 1;
        }

        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
