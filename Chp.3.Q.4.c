#include <stdio.h>

int main(){
    double F, C;

    printf("화씨값을 입력하시오: ");
    scanf("%lf", &F);

    C = (F - 32.0) * 9.0 / 5.0;
    printf("섭씨값은 %.2lf도 입니다.", C);

    return 0;
}