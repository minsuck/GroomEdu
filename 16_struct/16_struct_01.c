#include <stdio.h>

typedef struct {
	char name[15];  // �ѱ� 5���ڴ� 3byte*5�� 15ĭ�� �迭�� �ʿ�
	int kor;
	int eng;
	int math;
} Student;

double average(Student* s){
	return (s->kor+s->eng+s->math)/3.0;
    /* ���� �����ͷ� �޴� �迭�� �׳� s[1].kor�� ����������,
    ���⼭�� s[1]��ü�� �޾ƿ����Ƿ� �������� ->�� �����Ѵ�.
    */
}

int main() {
	Student s[3]={{.name=0}};
	
	for (int i=0; i<3; i++)
        scanf("%s %d %d %d", &s[i].name, &s[i].kor, &s[i].eng, &s[i].math);
    
    printf("%s %s %s\n", s[0].name, s[1].name, s[2].name);
	
	for (int j=0; j<3; j++)
        printf("%s %.1f\n", s[j].name, average(&s[j]));
	
	return 0;
}