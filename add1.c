//두개의 숫자의 합을 계산하는 프로그램
#include <stdio.h>

int main(){
    int x;      //첫 번째 정수를 저장할 변수
    int y;      //두 번째 정수를 저장할 변수
    int sum;    //두 수의 합을 저장할 변수

    x = 100;
    y = 200;

    sum = x + y;
    printf("두 수의 합: %10d", sum);

    return 0;
}