// Q.9 Write a program to calculate simple and compound interest for given principle, rate and time

#include <stdio.h>
#include <math.h>

int main(){
	float p, r, t, am;
	printf("Enter the value of principal amount: ");
	scanf("%f", &p);
	printf("Enter the annual rate of interest: ");
	scanf("%f", &r);
	printf("Enter the time period (in years): ");
	scanf("%f", &t);
	float SI = p*r*t/100;
	
	am = p*pow((1 + r/100), t);
	float CI = am - p;

	printf("The value of simple interest is: %f", SI);
	printf("The value of compound interest is: %f\n", CI);
	return 0;
}
