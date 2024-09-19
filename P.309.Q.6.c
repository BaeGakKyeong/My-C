#include <stdio.h>

int main(){
    int num, result = 0;

    printf("n값을 입력하시오(자연수): ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        result += i * i;
    }

    printf("계산값은 %d입니다.", result);

    return 0;
}