// Q97: Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from the input
    name[strcspn(name, "\n")] = 0;
    char initials[10] = "";

    // Tokenize the name using space as a delimiter
    char *token = strtok(name, " ");
    while (token != NULL) {
        // Append the first character of each token to initials
        strncat(initials, token, 1);
        token = strtok(NULL, " ");
    }

    printf("Initials: %s\n", initials);

    return 0;
}
