// Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main(){
	int n;
	int arr[n];
	int start = 0, end = n - 1;
	int temp;

	printf("Enter the total number of elements in the array: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the array: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[n]);
	}

	while (start < end) {
     		temp = arr[start];
	        arr[start] = arr[end];
	        arr[end] = temp;

	        start++;
	        end--;
	}

	printf("Reversed array: ");

 	for (int i = 0; i < 5; i++) {
       		 printf("%d ", arr[i]);
    	}

   	 return 0;
}
