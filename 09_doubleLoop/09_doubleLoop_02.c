#include <stdio.h>

int main() {
	int i, j;
	int input;
	
	scanf("%d", &input);
	
	for (i=0; i<input; i++){
		for (j=0; j<input-i; j++)	printf("*");
		printf("\n");
	}
	return 0;
}