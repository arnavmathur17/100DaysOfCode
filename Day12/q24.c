/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>
int main(){
	int a;
	printf("Enter the number of units consumed: ");
	scanf("%d", &a);

	if(a >= 1 && a <= 100){
		printf("Bill: %d", a*5);
}
	else if(a >= 101 && a <= 200){
		printf("Bill: %d", 250 + a*7);
}
	else if(a >= 201 && a <= 300){
		printf("Bill: %d", 250 + 700 + a*10);
}
	else if(a > 300){
		printf("Bill: %d ", 250 + 700 + 1000 + a*12);
}
	else{
		printf("Please enter a valid value");
} 
	return 0;
}
