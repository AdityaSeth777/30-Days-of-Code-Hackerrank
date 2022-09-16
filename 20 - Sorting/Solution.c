#include<stdio.h>
int main(){

	int i, j, n, temp, swap=0; 
	scanf("%d", &n);
	int arr[n];

	for(i=0;i<n;i++){
		scanf("%d", &arr[i]); 
	}
	//Aditya Seth
	for(i=0;i<n;i++){ 
		for(j=i+1;j<n;j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j]; 
				arr[j] = temp;
				swap++;	
			}
		}
	}
	printf("Array is sorted in %d swaps.\n", swap);
	printf("First Element: %d\n", arr[0]);
	printf("Last Element: %d\n", arr[n-1]);
	return 0;
}
