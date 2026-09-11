//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void printBinary(int n) {

    if (n == 0) {
        printf("0");
        return;
    }

    
    for (int i = 31; i >= 0; i--) {

        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    printBinary(num);
    printf("\n");
    
    return 0;
}   
