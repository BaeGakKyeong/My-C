#include <stdio.h>

int main(){
    const float SQMETER_PER_PYEONG = 3.3;   //평당 제곱미터 영어 --> square meter per pyeong, 즉 뒤에것이 앞에 오는 구조
    float pyeong, sqmeter;

    printf("평을 입력하시오: ");
    scanf("%f", &pyeong);

    sqmeter = pyeong * SQMETER_PER_PYEONG;
    printf("%f평방미터입니다.", sqmeter);

    return 0;
}