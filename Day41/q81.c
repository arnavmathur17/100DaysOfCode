// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main(){
    char str[1000];
    int count = 0;

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == '\n'){
            break;
        }
        count++;
    }

    printf("The number of characters in the string is: %d\n", count);
    return 0;
}
