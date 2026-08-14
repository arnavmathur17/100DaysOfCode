// Q.4 Write a program to calculate the area and circumference  of a circle given its radius

#include <stdio.h>

#define pi 3.14
int main(){
	float r;
	printf("Enter the radius of circle:");
	scanf("%f", &r);
	float area = pi*r*r;
	float circumference = 2*pi*r;
	printf("The area of circle is: %f\n", area);
	printf("The circumference of the circle is: %f\n", circumference);
	return 0;
}
