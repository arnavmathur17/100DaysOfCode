// Q.10 Write a program to input time in seconds and convert it to hours:minutes:seconds format

#include <stdio.h>
int main(){
	int a;
	printf("Enter time in seconds: ");
	scanf("%d", &a);

	if(a <= 0){
	printf("Time cannot be negative, please enter valid input \n");
	return 1;
}
	int h = a/3600;
	int h1 = a%3600;
	int m = h1/60;
	int m1 = h1%60;
	int s = m1;

	printf("The time in format hours:minutes:seconds is - %d:%d:%d\n", h, m, s);
	return 0;
}
