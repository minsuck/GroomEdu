#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	
	switch (input){
		case 1:
			printf("�޴� ���");
			break;
		case 2:
			printf("�߰�");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("����");
			break;
		case 5:
			printf("����");
			break;
		default:
			printf("�ùٸ� ��ȣ�� �Է��ϼ���.");
	}
	return 0;
}
