// Q56: Read and print elements of a one-dimensional array.

int main(){
	int n;
	int arr[n];
	printf("Enter the total number of elements in the array: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("Enter the elements of the array: ");
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}
