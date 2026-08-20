// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
	float a, b, c;
	printf("Enter first number: ");
	scanf("%f", &a);
	
	printf("Enter second number: ");
	scanf("%f", &b);

	printf("Enter third number: ");
	scanf("%f", &c);

	if(a > b && a > c){
		printf(" %f is the greatest\n ", a);
}
	else if(b > a && b > c){
		printf(" %f is the greatest\n", b);
}
	else if(a == b && b==c && a==c){
		printf("All the numbers are equal");
}
	else{
		printf(" %f is the greatest\n", c);
}
	return 0;
}
