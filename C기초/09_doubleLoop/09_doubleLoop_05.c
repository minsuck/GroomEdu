#include<stdio.h>
int main(){
    int j, i;

    for (i=0; i<5; i++){
        for (j=0; j<i+2;j+=2){
            printf("Hello!");
        }
        printf("\n");
    }
    return 0;
}