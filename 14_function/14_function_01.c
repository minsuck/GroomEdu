#include <stdio.h>

double average(int kor, int math, int eng, int science) {
  /* ����� ���ϴ� �ڵ带 �ۼ����ּ��� */
	return (kor+math+eng+science)/4.0;
}

int main() {
	double my_average;
	int kor, math, eng, science;
	
	scanf("%d %d %d %d", &kor, &math, &eng, &science);
	
	my_average=average(kor, math, eng, science);
  
  printf("��� ������ ������ �����ϴ� : %.1f\n",  my_average);

  return 0;
}
