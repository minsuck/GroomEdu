#include <stdio.h>

int main() {
  
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };
  int temp; // 두 값을 바꿀 때 사용할 변수
  int length = sizeof(arr) / sizeof(int);
	int j;
	
	for (int i=1; i<length; i++){
		j = i-1;
		temp = arr[i];
		while (arr[j]>=0 && arr[j]<temp){
			arr[j+1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	
	for (int k=0; k<length; k++)	printf("%d ", arr[k]);

  return 0;
}
