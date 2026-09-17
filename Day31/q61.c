// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main(){
	int n;
	int arr[n];
	int target;
	int found = 0;

	printf("Enter the total elements in an array: ");
	scanf("%d", &n);

	printf("Enter the elements of the array: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[n]);
	}

	printf("Enter the target element: ");
	scanf("%d", &target);

	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			printf("The target element is found at index %d\n", i);
			found = 1;
			break;
		}
	}

	if(found == 0){
		printf("Target element not found");
	}

	return 0;
}
