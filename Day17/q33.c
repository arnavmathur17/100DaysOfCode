// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main(){

    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
