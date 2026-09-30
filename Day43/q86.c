// Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // skip non-alphanumeric characters (optional)
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right]))
            return 0; // not a palindrome

        left++;
        right--;
    }
    return 1; // is a palindrome
}

int main() {
    char str[] = "A man a plan a canal Panama";

    if (is_palindrome(str))
        printf("\"%s\" is a palindrome\n", str);
    else
        printf("\"%s\" is not a palindrome\n", str);

    return 0;
}
