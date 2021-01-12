#include <stdio.h>

typedef struct {
	char name[15];  // 한글 5글자는 3byte*5라 15칸의 배열이 필요
	int kor;
	int eng;
	int math;
} Student;

double average(Student* s){
	return (s->kor+s->eng+s->math)/3.0;
    /* 원래 포인터로 받는 배열은 그냥 s[1].kor로 참조하지만,
    여기서는 s[1]자체를 받아왔으므로 포인터인 ->로 참조한다.
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