// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Iterate through the string and replace spaces
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    
    printf("Result: %s", str);
    return 0;
}   
