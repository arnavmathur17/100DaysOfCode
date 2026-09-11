// Q30: Write a program to reverse a given number.

#include <stdio.h>
int main(){
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        int num = 0;
        int ld;

        while(n > 0){
                ld = n%10;
                num = num*10 + ld;
                n = n/10;
}
        printf("The reversed number is: %d", num);
        return 0;
}


