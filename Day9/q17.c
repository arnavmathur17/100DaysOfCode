// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){
	printf("Let the equation be of the form ax^2 + bx + c = 0\n");

	float a, b, c;
	printf("Enter the value of a: ");
	scanf("%f", &a);

	printf("Enter the value of b: ");
	scanf("%f", &b);

	printf("Enter the value of c: ");
	scanf("%f", &c);

	float d = sqrt(b*b - 4*a*c);
	float r1 = (-b + d)/2*a;
	float r2 = (-b - d)/2*a;

	if(d == 0){
		printf("Roots are real and equal : %f\n", r1);
}
	else if(d > 0){
		printf("Roots are real and different : %f, %f\n", r1, r2);
}
	else{
		printf("Roots are complex\n");
}
	return 0;
}
