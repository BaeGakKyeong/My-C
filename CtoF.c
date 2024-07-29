#include <stdio.h>

int main(){
    float cel, fah;
    
    printf("화씨 온도를 입력하시오: ");
    scanf("%f", &fah);

    cel = (fah - 32.0) * (5.0 / 9.0);

    // 5 / 9 * (fah - 32.0)으로 수식을 만들면 그 결과는 항상 0이다.
    // 5 / 9 의 정수 나눗셈을 하면 그 결과가 0이기 때문이다. 따라서 만드시 명시적인 형 변환을 해 주어야 한다.

    printf("화씨 %.2f도는 섭씨 %.2f도 입니다.", fah, cel);

    return 0; 
}