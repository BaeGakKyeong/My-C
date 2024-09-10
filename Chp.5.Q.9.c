#include <stdio.h>

int main(){
    float stick_H, stick_S, pyramid_H, pyramid_S;

    printf("지팡이의 높이를 입력하시오: ");
    scanf("%f", &stick_H);

    printf("지팡이의 그림자의 길이를 입력하시오: ");
    scanf("%f", &stick_S);

    printf("피라미드의 그림자의 길이를 입력하시오: ");
    scanf("%f", &pyramid_S);

    pyramid_H = pyramid_S * stick_H / stick_S;

    printf("피라미드의 높이는 %f입니다.", pyramid_H);

    return 0;
}