/* Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 

90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F */

#include <stdio.h>
int main(){
	float a;
	printf("Enter your percentage: ");
	scanf("%f", &a);
	
	if(a >= 90 && a <= 100){
		printf("Grade A\n");
}
	else if(a >= 80 && a < 90){
		printf("Grade B\n");
}
	else if(a >= 70 && a < 80){
		printf("Grade C\n");
}
	else if(a >= 60 && a < 70){
		printf("Grade D\n");
}
	else if(a >= 0 && a < 60){
		printf("Grade F\n");
}
	else{
		printf("Please enter a value between 0 - 100\n");
		return 1;
}
	return 0;
}
