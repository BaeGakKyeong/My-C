#include <stdio.h>

int sum_2num(int num1, int num2){
    int sum;
    sum = num1 + num2;

    return sum;
}

int main(){
    int x, y;
    
    printf("두 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    // printf("두 수의 합은 %d입니다.", sum_2num); 이 문장은 잘못된 함수 사용으로 인해 경고나 오류가 발생함.
    // 함수 이름만 사용하면 함수 포인터를 가리키므로, 함수 호출을 해야 함.

    printf("두 수의 합은 %d입니다.\n", sum_2num(x, y));   //또는

    int sum = sum_2num(x, y);                        //이런 식의 문장을 사용해야 함.
    printf("두 수의 합은 %d입니다.", sum);

    return 0;
}