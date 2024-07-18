#include <stdio.h>

int main(){
    int x = 1, y = 1, result_x, result_y;

    printf("계산 전 x값과 y값은 각각 %d, %d\n\n", x, y);

    result_x = (2 > 3) && (++x > 0);    //단축 계산 때문에, 좌변 2 > 3가 거짓인 순간 0을 대입하고 계산이 종료됨. 우변은 실행하지 않음.
    result_y = (2 < 3) || (--y > 0);    //역시 단축 계산에 의해, 좌변 2 < 3가 참인 순간 1을 대입하고 계산이 종료됨. 우변은 실행하지 않음.

    printf("계산 후\n\n");

    printf("x의 결과값 %d, x = %d\n", result_x, x);
    printf("y의 결과값 %d, y = %d", result_y, y);

    return 0;
}