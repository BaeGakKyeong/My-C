#include <stdio.h>

int main(){
    const int SEC_PER_MINUTE = 60;
    int input, minute, second;

    printf("초를 입력하시오: ");
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;

    printf("%d분은 %d분 %d초 입니다.", input, minute, second);

    return 0;
}