// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, numDigits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    numDigits = 0;
    int temp = num;
    while (temp > 0) {
        firstDigit = temp % 10;
        temp /= 10;
        numDigits++;
    }

    swappedNum = lastDigit * (int)pow(10, numDigits - 1) + (num / 10) % (int)pow(10, numDigits -
    2) * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}
