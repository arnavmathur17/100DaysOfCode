// Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";
    int n = strlen(str);

    for (int i = 0; i < n; i++) {          // Start index
        for (int len = 1; i + len <= n; len++) { // Substring length
            for (int j = 0; j < len; j++) {      // Print character
                putchar(str[i + j]);
            }
            putchar('\n');
        }
    }
    return 0;
}   
