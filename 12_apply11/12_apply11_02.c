#include <stdio.h>

int main() {
  
  int arr[10] = { 1032, 99, 1004, 234, 452, 8, 922, 445, 246, 2048 };
  int min = arr[0];
  int i; // �ݺ����� ���� ����
  
  for (int i=0; i<10; i++){
		if (min>arr[i])	min = arr[i];
	}
  
  printf("�迭 �ȿ��� ���� ���� ���� %d�Դϴ�.\n", min);
  
  return 0;
}
