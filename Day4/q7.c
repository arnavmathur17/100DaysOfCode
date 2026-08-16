// Q.7 Write a program to swap two numbers without using a third variable

#include <stdio.h>
int main(){
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);

	 printf("Values before swapping : a=%d, b=%d \n", a, b);

	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("Values after swapping : a=%d, b=%d \n", a, b);
	return 0;
}
