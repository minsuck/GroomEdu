#include <stdio.h>

int main() {
	int num_1, num_2;
	int temp;
	
	scanf("%d %d", &num_1, &num_2);
	
	temp = num_1;
	num_1 = num_2;
	num_2 = temp;
	
	printf("%d %d", num_1, num_2);
	

  return 0;
}
