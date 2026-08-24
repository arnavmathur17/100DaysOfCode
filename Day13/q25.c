// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main(){
	float a, b;
	char c;

	printf("Enter the operation(+, -, *, /): ");
        scanf("%c", &c);


	printf("Enter first numuber: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);


	 switch (c) {

        case '+' :
                printf("%f", a+b);
                break;

        case '-' :
                printf("%f", a-b);
                break;

        case '/' :
                printf("%f", a/b);
                break;

        case '*' :
                printf("%f", a*b);
                break;

        default:
                printf("Sorry this operation can't be done");
                break;
}

	return 0;
}
