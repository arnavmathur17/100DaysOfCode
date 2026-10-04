// Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100], longest[100];
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the string
    str[strcspn(str, "\n")] = 0;

    char *word = strtok(str, " ");
    while(word != NULL){
        int length = strlen(word);
        if(length > maxLength){
            maxLength = length;
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("The longest word is: %s\n", longest);
    return 0;
}
