#include <stdio.h>

int main() {
  
  int point;
  
  scanf("%d", &point);
	
	if (point>100)	printf("부정행위입니다");
	else if (point<0)	printf("잘못된 점수입니다");
	else if (point>=0 && point<=50)	printf("재시험입니다");
	else if (point>50 && point<=80)	printf("합격입니다");
	else	printf("훌륭합니다");
  

  return 0;
}
