#include <stdio.h>

int main() {
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };
  int temp; // �� ���� �ٲ� �� ����� ����
	int length = sizeof(arr)/sizeof(int);
  
	for (int i=0; i<length-1; i++){
		for (int j=0; j<length-1; j++){
			if(arr[j]<arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for (int i=0; i<length; i++) printf("%d ", arr[i]);
	
  return 0;
}
