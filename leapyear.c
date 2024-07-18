#include <stdio.h>

int main(){
    int Y, result;

    printf("연도를 입력하시오: ");
    scanf("%d", &Y);

    result = ((Y % 4 == 0) && (Y % 100 != 0)) || (Y % 400 == 0);

    printf("윤년 여부: %d", result);

    return 0;
}