// Q85: Reverse a string.

void reverseString(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[] = "hello";
    reverseString(str);
    printf("%s\n", str);  // "olleh"
    return 0;
}
