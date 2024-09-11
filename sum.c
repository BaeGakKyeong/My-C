#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        sum += i;
    }

    printf("1부터 %d까지의 합은 %d입니다.", num, sum);

    return 0;
}