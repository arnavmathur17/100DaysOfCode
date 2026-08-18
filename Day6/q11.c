// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a%2 == 0) {
		printf("It is an even number\n");
}
	else {
		printf("The number is odd\n");
}
	return 0;
}
