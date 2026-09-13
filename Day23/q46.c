/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/


#include <stdio.h>

int main(){
    int n = 4;
    int j = 4;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= j; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
