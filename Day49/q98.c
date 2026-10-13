// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = 0;
    char initials[10] = "";

    // Tokenize the name using space as a delimiter
    char *token = strtok(str, " ");
    char *surname = NULL;
    while (token != NULL) {
        // Append the first character of each token to initials
        strncat(initials, token, 1);
        surname = token; // Update surname to the last token
        token = strtok(NULL, " ");
    }

    printf("Initials: %s\n", initials);
    printf("Surname: %s\n", surname);

    return 0;
}
