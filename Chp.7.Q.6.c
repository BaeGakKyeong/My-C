#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        sum += i * i;
    }

    printf("수식의 값은 %d 입니다.", sum);

    return 0;
} 