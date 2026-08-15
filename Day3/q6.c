// Q.6 Write a program to swap two numbers using a third variable

#include <stdio.h>
int main(){
	int a, b, temp;
	printf("Enter first no: ");
	scanf("%d", &a);
	printf("Enter second no: ");
	scanf("%d", &b);

	printf("Values before swapping: a = %d, b = %d\n", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("Values after swapping : a = %d, b = %d\n", a, b);
	return 0;
}
