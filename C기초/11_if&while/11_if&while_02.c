#include <stdio.h>

int main() {
  
  int point;
  
  scanf("%d", &point);
	
	if (point>100)	printf("���������Դϴ�");
	else if (point<0)	printf("�߸��� �����Դϴ�");
	else if (point>=0 && point<=50)	printf("������Դϴ�");
	else if (point>50 && point<=80)	printf("�հ��Դϴ�");
	else	printf("�Ǹ��մϴ�");
  

  return 0;
}
