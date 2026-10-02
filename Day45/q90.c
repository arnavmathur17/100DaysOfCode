// Q90: Toggle case of each character in a string 

#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');  // Convert to lowercase
        }
    }
    
    printf("String with toggled case: %s", str);

    return 0;
}
