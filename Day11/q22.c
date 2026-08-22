// Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
int main(){
	float a, b;
	printf("Enter the cost price: ");
	scanf("%f", &a);

	printf("Enter the selling price: ");
	scanf("%f", &b);
	
	if(b > a){
		printf("Profit, %f %%", (b-a)*100/a);
}
	else if(a > b){
		printf("Loss, %f %%", (a-b)*100/a);
}
	else{
		printf("No profit no loss");
}
	return 0;
}
