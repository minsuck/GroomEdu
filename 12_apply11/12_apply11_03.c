#include <stdio.h>
int main() {
	/*
	�Ҽ� ���ϱ�
	�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ��
	�Ҽ���
	- 2�� ��
	- ����� ���� ��
	
	-�Ҽ� �Է¹ޱ�
	- �Է¹��� �� �ȿ��� �Ҽ� ã��
	*/
	int arry[100] = {0, };	// �Ҽ��� ������ 100���� ����, ��� 0���� �ʱ�ȭ
	int index=0;	// arry �迭�� �ε���
	int is_decimal=1;	//�Ҽ����� �Ǻ��ϱ� ���� ���.
	int input;
	scanf("%d", &input);
	
	arry[index]=2;	//2�� �������� �Ҽ��� ���� �߰�����
	index++;
	
	for (int j=3; j<input; j++){	//3~input ���� j. �׸��� �� �Է¹��� �� ���� ���� ������ ã�ƾ���
		for (int i=2; i<=j/2; i++){	//j�� �Ҽ����� �Ǻ�
			if (j%i == 0){
				is_decimal=0;	// j�� ����� �ִٸ� is_decimal�� false�� �ٲٰ�
				break;						// break�� ���� j�� �Ѿ��.
			}
			is_decimal=1;	// �������� ���� ���ٸ� is_decimal=true�� ����.
		}
		if (is_decimal){	//��� �˻簡 ������ �� ���� is_decimal=true��� �Ҽ��̹Ƿ� arry�� �߰�.
			arry[index] = j;
			index++;
		}
	}

	for (int k=0; k<index; k++){
		printf("%d ", arry[k]);
	}
	return 0;
}
