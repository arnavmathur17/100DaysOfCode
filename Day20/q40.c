// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {

    int binary, num, remainder, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    num = binary;

    while(num != 0) {
        remainder = num % 10;

	if(remainder == 0) {
            result += 1 * place;
        }
	 else if(remainder == 1) {
            result += 0 * place; 
        }
	 else {
            printf("Invalid binary number.\n");
            return 1;
        }
        num /= 10;
        place *= 10; 
    }

    printf("The 1's complement of %d is: %d\n", binary, result);

    return 0;
    
}
