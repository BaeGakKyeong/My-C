#include <stdio.h>

int main(){
    float R, result = 1;
    int N;
    
    printf("실수 값을 입력하시오: ");
    scanf("%f", &R);

    do{
        printf("거듭제곱 횟수를 입력하시오: ");
        scanf("%d", &N);

    }while(N < 0 || N % 1 != 0);

    for(int i = 1; i <= N; i++){
        result *= R;
    }

    printf("결과값은 %f", result);

    return 0;
}