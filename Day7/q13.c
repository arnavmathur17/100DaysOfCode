// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main (){
	int a;
	printf("Enter the year you want to check: ");
	scanf("%d", &a);

	if(a %400 == 0){
		printf("Leap year");
}
	else if(a % 100 == 0){
		printf("Not a leap year");
}
	else if(a%4 == 0){
		printf("Leap year");
}
	else {
		printf("Not a leap year");
}
	return 0;
}
