#include <stdio.h>

int main() {
  
  int arr[10] = { 5, 10, 15, 22, 23, 102, 99, 102, 130, 8 };
  int odd = 0;
  int even = 0;
  
  for (int i=0; i<10; i++){
		if (arr[i]%2 == 0)	even++;
		else	odd++;
	}
  
  printf("Ȧ���� ������ %d�� �Դϴ�.\n", odd);
  printf("¦���� ������ %d�� �Դϴ�.\n", even);
  
  return 0;
}
