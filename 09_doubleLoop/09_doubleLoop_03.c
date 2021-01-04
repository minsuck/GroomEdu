#include <stdio.h>

int main() {
	int i, j;
	int input;
	
	scanf("%d", &input);
	
	for (i=0; i<input; i++){
		for (j=0; j<2*i+1; j++)	printf("*");
		printf("\n");
	}
  return 0;
}
