#include <stdio.h>

int main(){
    double mass, velocity, energy;

    printf("질량을 입력하시오: ");
    scanf("%lf", &mass);

    printf("속력를 입력하시오: ");
    scanf("%lf", &velocity);

    energy = mass * velocity * velocity * 0.5;
    printf("운동에너지 E는 %lf입니다.", energy);

    return 0;
}