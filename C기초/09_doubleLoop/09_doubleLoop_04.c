#include <stdio.h>

int main() {
	int input;
	
	scanf("%d", &input);
	
	for(int i=0; i<input; i++){
		for(int j=0; j<input-i; j++){
			printf(" ");
		}
		
		for(int k=0; k<2*i+1; k++){
			printf("*");
		}
		printf("\n");
	}
  
  return 0;
}