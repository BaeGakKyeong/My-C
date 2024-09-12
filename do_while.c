#include <stdio.h>

int main(){
    int num, sum = 0;

    do{
        printf("숫자를 입력하시오(종료하려면 0을 입력하시오): ");
        scanf("%d", &num);

        sum += num;
    }while(num != 0);   //0이 아닌 경우 돌아감. 사실상 while문하고 같지만, 일단 한번 루프를 돈다는 것에 의미가 있음.

    printf("수 들의 합: %d", sum);

    return 0;
}