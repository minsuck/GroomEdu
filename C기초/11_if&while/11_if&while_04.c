#include <stdio.h>
int main(){
    int num=100;

    if (num<100 || num>=100){
        printf("����1");
    }
    else if (num<100 || num>=100){
        printf("����2");
    }
    else{
        printf("����3");
    }
    return 0;
}

/*
num�� 100�̹Ƿ� if���� else if�� �� �� �ش�ȴ�.
�� ��� if���� ���ǿ� ���� �ش��� ������ �����ϰ� �������� �Ѿ��.
�׷��� if���� ����ǰ�, else if���� ������� �ʰ� ����ȴ�.
*/