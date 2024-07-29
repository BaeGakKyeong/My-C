#include <stdio.h>

int main(){
    int x, y;

    printf("나뉘는 수(정수)를 입력하시오: ");
    scanf("%d", &x);

    printf("나누는 수(정수)를 입력하시오: ");
    scanf("%d", &y);

    printf("몫: %d\n", x / y);
    printf("나머지: %d\n", x % y);

    return 0;
}