#include <stdio.h>
int main(){
    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d\n", *arr);
    printf("%d\n", *(arr+1));
    printf("%d\n", arr+1);
    printf("%d\n", &arr[1]);
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(&arr));
    printf("%d\n", sizeof(*arr));
    

    return 0;
}