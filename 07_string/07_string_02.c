/*
30자 이내의 문자열을 입력받고, 문자열의 길이를 출력하시오.
*/
#include <stdio.h>
int main() {
	char ch[31];
	int count=0;
	
	scanf("%s", ch);
	
	while (ch[count]!=0){
		count++;
	}
	printf("%d", count);
	
	return 0;
} 
