#include <stdio.h>

int main(){
    int x, y, sum;

    printf("첫 번째 숫자를 입력하시오: ");
    scanf("%d", &x);
    printf("두 번쨰 숫자를 입력하시오: ");
    scanf("%d", &y);

    sum = x + y;
    printf("두 수의 합: %d", sum);

    return 0;
}