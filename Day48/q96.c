// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWordsInSentence(char *sentence) {
    char *wordStart = sentence;
    char *temp = sentence;

    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character if present

    reverseWordsInSentence(sentence);
    printf("Reversed words in the sentence: %s\n", sentence);
    return 0;
}
