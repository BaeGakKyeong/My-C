#include <stdio.h>

int main(){
    float cel, fah;
    
    printf("화씨 온도를 입력하시오: ");
    scanf("%f", &fah);

    cel = (fah - 32.0) * (5.0 / 9.0);

    printf("화씨 %.2f도는 섭씨 %.2f도 입니다.", fah, cel);

    return 0; 
}