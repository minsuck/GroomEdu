#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkScore(int mScore, int cScore) {
  printf("\n-------------------------");
  printf("\n���� �� �÷��̾��� �����Դϴ�.");
  printf("\n�÷��̾��� ���� : %d", mScore);
  printf("\n��ǻ���� ���� : %d", cScore);
  printf("\n-------------------------");
}

void showEnding(int mScore, int cScore) {
	if (mScore>cScore)	printf("\n\n�����մϴ�, �ΰ��� �¸�!");
	else if (mScore<cScore) printf("\n\n����");
	else printf("\n\n���º��Դϴ�!");
}

int main() {
  int diceCount = 0;
  int diceEnd = 3;
  int mScore = 0;
  int cScore = 0;
  int selection;
  srand(time(NULL));

  printf("���� ���� : �ֻ����� �� 3 �� ���� ��ģ �ֻ��� ���� ���� �� ���� ����� �̱�� �˴ϴ�.");
  printf("\n�ֻ��� ������ �����ϰڽ��ϴ�.");
  printf("\n------------------------");

  while(diceCount < diceEnd) {
   	printf("\n�ֻ����� �����ּ���. 1�� �ֻ��� ������ 2�� ���� ���� �� Ȯ���ϱ� : ");
  	scanf("%d", &selection);
    
    if(selection == 1) {
      int mResult = (rand() % 6) + 1;
      int cResult = (rand() % 6) + 1;
      
      mScore += mResult;
      cScore += cResult;
      
      printf("\n�÷��̾��� �����Դϴ�. �ֻ����� �����ϴ�.");
      printf("\n�층! �ֻ����� ���� %d �Դϴ�.", mResult);
      printf("\n���� �� ������ %d �Դϴ�.", mScore);
      
      printf("\n��ǻ���� �����Դϴ�. �ֻ����� �����ϴ�.");
      printf("\n�층! �ֻ����� ���� %d �Դϴ�.", cResult);
      printf("\n���� �� ������ %d �Դϴ�.", cScore);
      
			diceCount++;
    } else if(selection == 2) {
      checkScore(mScore, cScore);
    } else {
      printf("\n�߸� �Է��ϼ̽��ϴ�.");
    }
  }
  showEnding(mScore, cScore);
  return 0;
}