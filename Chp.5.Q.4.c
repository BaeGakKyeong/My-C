#include <stdio.h>

int main(){
    const float Cm_per_inch = 2.54;
    const float Cm_per_feet = 30.48; 
    float height, inch;
    int feet;

    printf("키를 입력하시오(cm): ");
    scanf("%f", &height);

    feet = height / Cm_per_feet;                            
    inch = (height - (feet * Cm_per_feet)) / Cm_per_inch;

    printf("%.2fcm는 %d피트 %.2f인치입니다.", height, feet, inch);

    return 0;
}