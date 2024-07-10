#include <stdio.h>

int main(){
    float mile, meter;

    printf("마일을 입력하시오: ");
    scanf("%f", &mile);

    meter = mile * 1609;
    printf("%.1f마일은 %.2f미터입니다.", mile, meter);

    return 0;
}