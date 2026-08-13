// Q1. Write a program to input two variables and display their sum

#include <stdio.h>
int main(){
	int a;
	printf("Enter first number: ");
	scanf("%d", &a);
	int b;
	printf("Enter second number: ");
	scanf("%d", &b);
	int sum = a+b;
	printf("The sum of two numbers is : %d\n", sum);
	return 0;
}
