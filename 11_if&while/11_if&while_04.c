#include <stdio.h>
int main(){
    int num=100;

    if (num<100 || num>=100){
        printf("정답1");
    }
    else if (num<100 || num>=100){
        printf("정답2");
    }
    else{
        printf("정답3");
    }
    return 0;
}

/*
num이 100이므로 if문과 else if문 둘 다 해당된다.
이 경우 if문은 조건에 먼저 해당한 구문만 실행하고 다음으로 넘어간다.
그래서 if문이 실행되고, else if문은 실행되지 않고 종료된다.
*/