/* Q114: Write a program to take a string s as input. The task is to find the
length of the longest substring without repeating characters. Print the length
as output. */

#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int last[256];
    int i, left = 0, longest = 0, length;

    if (scanf("%999s", s) != 1)
        return 0;

    memset(last, -1, sizeof(last));
    length = strlen(s);

    for (i = 0; i < length; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (last[ch] >= left)
            left = last[ch] + 1;
        last[ch] = i;

        if (i - left + 1 > longest)
            longest = i - left + 1;
    }

    printf("%d\n", longest);
    return 0;
}
