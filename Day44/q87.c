// Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int digits = 0, spaces = 0, specialChars = 0;
    int i;

    printf("Enter a string: ");
    // Use fgets to safely read the string
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        } else if (str[i] != '\n') { // Ignore newline from fgets
            // Check if it is an alphabet; if not, it is special
            if (!((str[i] >= 'a' && str[i] <= 'z') || 
                  (str[i] >= 'A' && str[i] <= 'Z'))) {
                specialChars++;
            }
        }
    }

    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
