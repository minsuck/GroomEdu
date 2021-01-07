#include <stdio.h>
int main() {
	/*
	소수 구하기
	소수는 1과 자기 자신으로만 나누어지는 수
	소수는
	- 2일 때
	- 약수가 없는 수
	
	-소수 입력받기
	- 입력받은 수 안에서 소수 찾기
	*/
	int arry[100] = {0, };	// 소수의 갯수는 100개로 제한, 모두 0으로 초기화
	int index=0;	// arry 배열의 인덱스
	int is_decimal=1;	//소수인지 판별하기 위해 사용.
	int input;
	scanf("%d", &input);
	
	arry[index]=2;	//2는 예외적인 소수라 따로 추가해줌
	index++;
	
	for (int j=3; j<input; j++){	//3~input 정수 j. 그리고 꼭 입력받은 수 보다 작은 정수를 찾아야함
		for (int i=2; i<=j/2; i++){	//j가 소수인지 판별
			if (j%i == 0){
				is_decimal=0;	// j가 약수가 있다면 is_decimal을 false로 바꾸고
				break;						// break로 다음 j로 넘어간다.
			}
			is_decimal=1;	// 나눠지는 수가 없다면 is_decimal=true로 유지.
		}
		if (is_decimal){	//모든 검사가 끝났을 때 까지 is_decimal=true라면 소수이므로 arry에 추가.
			arry[index] = j;
			index++;
		}
	}

	for (int k=0; k<index; k++){
		printf("%d ", arry[k]);
	}
	return 0;
}
