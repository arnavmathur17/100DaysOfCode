// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main(){
	float a, b ,c;
	printf("Enter the length of first side of triangle: ");
	scanf("%f", &a);

	printf("Enter the length of second side of triangle: ");
	scanf("%f", &b);

	printf("Enter the length of third side of triangle: ");
	scanf("%f", &c);

	if(a == b &&  b==c && c==a){
		printf("Equilateral\n");
}
	else if( a!=b && b!=c && c!=a){
		printf("Scalene\n");
}
	else{
		printf("Isoceles\n");
}
	return 0;
}
