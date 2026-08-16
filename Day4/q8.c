// Q.8 Write a program to find and display the sum of first n natural numbers

#include <stdio.h>
int main(){
	int a;
	printf("Enter the natural number you want the sum until: ");
	scanf("%d", &a);
	
	int sum = a*(a+1)/2;
	if(a <= 0){
	printf("Please enter a no. greater than 0");
	return 1;
}
	printf("The sum of first %d natural numbers is: %d  \n ", a, sum);
	return 0;
}
