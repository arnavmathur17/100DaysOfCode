// Q.3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include <stdio.h>
int main(){
	int l;
	printf("Enter the length of rectangle:");
	scanf("%d", &l);
	int b;
	printf("Enter the breadth of the rectangle:");
	scanf("%d", &b);
	printf("The perimeter of rectangle is:%d\n", 2*(l+b));
	printf("The area of rectangle is:%d\n", l*b);
	return 0;
}
