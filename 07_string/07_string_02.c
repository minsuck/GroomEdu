/*
30�� �̳��� ���ڿ��� �Է¹ް�, ���ڿ��� ���̸� ����Ͻÿ�.
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
