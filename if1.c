#include <stdio.h>

int main(){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if(num > 0){
        printf("양수입니다.\n");
    }

    printf("입력된 값은 %d 입나다.\n", num);

    return 0;
}