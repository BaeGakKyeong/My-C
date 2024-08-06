#include <stdio.h>

int main(){
    float H_of_stick, H_of_pyramid, D_of_sick, D_of_pyramid;

    printf("지팡이의 높이를 입력하시오: ");
    scanf("%f", &H_of_stick);

    printf("지팡이의 그림자의 길이를 입력하시오: ");
    scanf("%f", &D_of_sick);

    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%f", &D_of_pyramid);

    H_of_pyramid = D_of_pyramid * H_of_stick / D_of_sick;

    printf("피라미드의 높이는 %.2f입니다.", H_of_pyramid);

    return 0;
}