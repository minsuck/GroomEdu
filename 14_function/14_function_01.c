#include <stdio.h>

double average(int kor, int math, int eng, int science) {
  /* 평균을 구하는 코드를 작성해주세요 */
	return (kor+math+eng+science)/4.0;
}

int main() {
	double my_average;
	int kor, math, eng, science;
	
	scanf("%d %d %d %d", &kor, &math, &eng, &science);
	
	my_average=average(kor, math, eng, science);
  
  printf("평균 점수는 다음과 같습니다 : %.1f\n",  my_average);

  return 0;
}
