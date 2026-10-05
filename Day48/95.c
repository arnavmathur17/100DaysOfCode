// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }
    char temp[100];
    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (isRotation(s1, s2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }
    return 0;
}
