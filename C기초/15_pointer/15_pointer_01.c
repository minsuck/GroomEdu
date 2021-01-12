#include <stdio.h>
void BubbleSort(int* arr, int length);

int main() {
	int arr[10];
	int length = sizeof(arr)/sizeof(int);
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	
	BubbleSort(arr, length);
	
	for(int i=0; i<length; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void BubbleSort(int* arr, int length){
	int temp;
	
	for(int i=0; i<length-1; i++){
		for (int j=0; j<length-1; j++){
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}