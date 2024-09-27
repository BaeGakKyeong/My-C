#include <stdio.h>

int factorial(int num){
    int sum = 1;

    for(int i = 1; i <= num; i++){
        sum *= i;
    }

    return sum;
}

int main(){
    int n;

    printf("팩토리얼 계산기. 자연수를 입력하시오: ");
    scanf("%d", &n);

    printf("팩토리얼 값은 %d입니다.", factorial(n));

    return 0;
}