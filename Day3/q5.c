// Q.5 Write a program to convert temperature from celcius to fahrenheit

#include <stdio.h>
int main(){
	float c, f;
	printf("Enter the temperature in celcius: ");
	scanf("%f", &c);

	f = 9*c/5+32;
	printf("Temperature in fahrenheit is:%f\n", f);
	return 0;
}
