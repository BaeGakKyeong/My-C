#include <stdio.h>

int main(){
    float x, y;

    printf("x 좌표를 입력하시오: ");
    scanf("%f", &x);

    printf("y 좌표를 입력하시오: ");
    scanf("%f", &y);

    (x > 0 && y > 0) ? printf("1사분면") : printf("");

    (x > 0 && y < 0) ? printf("4사분면") : printf("");

    (x < 0 && y > 0) ? printf("2사분면") : printf("");

    (x < 0 && y < 0) ? printf("3사분면") : printf("");

    return 0;
}