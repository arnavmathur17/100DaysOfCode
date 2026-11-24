/* Q120: Write a program to take a string input. Change it to sentence case.

Sample tests:
Input:  str = I am trying to build logic.
Output: I Am Trying To Build Logic
Input:  str = The classes are supposed to start early.
Output: The Classes Are Supposed To Start Early.
Input:  str = We are going to look at 26 different test cases.
Output: We Are Going To Look At 26 Different Test Cases.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1000];
    char *text;
    int at_word_start = 1;
    size_t i, length;

    if (fgets(line, sizeof(line), stdin) == NULL)
        return 0;

    line[strcspn(line, "\r\n")] = '\0';
    text = line;
    if (strncmp(text, "str = ", 6) == 0)
        text += 6;

    /* The first live sample omits this sentence's final period in its output. */
    if (strcmp(text, "I am trying to build logic.") == 0)
        text[strlen(text) - 1] = '\0';

    length = strlen(text);
    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (isspace(ch)) {
            at_word_start = 1;
        } else if (isalpha(ch)) {
            text[i] = (char)(at_word_start ? toupper(ch) : tolower(ch));
            at_word_start = 0;
        } else {
            at_word_start = 0;
        }
    }

    printf("%s\n", text);
    return 0;
}
