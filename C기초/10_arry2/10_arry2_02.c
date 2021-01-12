#include <stdio.h>

int main() {
	int arry01[3][3];
	int arry02[3][3];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3;j++){
			scanf("%d", &arry01[i][j]);
		}
	}
	for (int i=0; i<3; i++){
		for (int j=0; j<3;j++){
			scanf("%d", &arry02[i][j]);
		}
	}
	for (int i=0; i<3; i++){
		for (int j=0; j<3;j++){
			printf("%d ", arry01[i][j]+arry02[i][j]);
		}
		printf("\n");
	}
  return 0;
}
