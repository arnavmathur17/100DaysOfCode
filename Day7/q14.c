// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main(){
	char a, e, i, o, u, d1;
	printf("Enter the character: ");
	scanf("%c", &d1);

	if(d1 == 'a' ||d1 == 'e'||d1 == 'i' ||d1 == 'o' ||d1== 'u') {
		printf("The character is a vowel");
}
	else{
		printf("The character is a consonant");
}
	return 0;
}
