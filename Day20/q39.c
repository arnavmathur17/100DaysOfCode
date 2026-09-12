// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){

    int num, rem, prod = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (num != 0) {
        rem = num % 10;
        
        if (rem % 2 != 0) { 
            prod *= rem;
            hasOdd = 1;
        }
        
        num = num / 10; 
    }

    if (hasOdd) {
        printf("Product of odd digits: %d\n", prod);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}   
