// Q.2 Write a program to input two variables and display their sum, difference, product and quotient

#include <stdio.h>
int main(){
	int a;
	printf("Enter first number:");
	scanf("%d", &a);
	int b;
	printf("Enter second number:");
	scanf("%d", &b);
	printf("Sum of the two numbers is:%d\n", a+b);
	printf("Difference of the two numbers is:%d\n", a-b);
	printf("Product of the two numbers is:%d\n", a*b);
	printf("Qoutient of the two numbers is: %d\n", a/b);
	return 0;
}
