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

    //sum_2num(x, y);
    //printf("두 수의 합은 %d입니다.", sum_2num); 이 문장은 경고가 발생함. sum_2num함수가 return으로 결과를 반환하지만, 변수처럼 사용할 수는 없음.
    printf("두 수의 합은 %d입니다.\n", sum_2num(x, y));   //또는

    int sum = sum_2num(x, y);
    printf("두 수의 합은 %d입니다.", sum);

    return 0;
}