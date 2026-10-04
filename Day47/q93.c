// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from strings
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // Count frequency of each character in both strings
    for(int i = 0; str1[i] && str2[i]; i++){
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
    }

    // Compare character counts
    int isAnagram = 1;
    for(int i = 0; i < 256; i++){
        if(count1[i] != count2[i]){
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram){
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are not anagrams of each other.\n");
    }

    return 0;
}
