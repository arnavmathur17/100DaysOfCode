// Q84: Convert a lowercase string to uppercase without using built-in functions 

#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a lowercase string: ");
    gets(str); // Note: gets() is unsafe; use fgets() in production

    // Convert to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Output result
    printf("Uppercase string: %s\n", str);

    return 0;
}   
