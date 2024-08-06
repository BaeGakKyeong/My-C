#include <stdio.h>

int main(){
    int x, times, result;

    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    
    printf("2를 곱하고 싶은 횟수를 입력하시오: ");
    scanf("%d", &times);

    result = x << times;

    printf("%d << %d의 값: %d", x, times, result);

    return 0;
}