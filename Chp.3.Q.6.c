#include <stdio.h>

int main(){
    float earth_weight, moon_weight;

    printf("몸무게를 입력하시오: ");
    scanf("%f", &earth_weight);

    moon_weight = earth_weight * 0.17;
    printf("달에서의 몸무게는 %.2fkg입니다.", moon_weight);

    return 0;
}