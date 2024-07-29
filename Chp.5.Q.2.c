#include <stdio.h>
#include <math.h>   //fabs()함수를 쓰기 위해 math.h헤더파일을 포함해야 한다.

int main(){
    double x, y;

    printf("두 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("두 수의 합: %.2lf\n", x + y);
    printf("두 수의 차: %.2lf\n", fabs(x - y));
    printf("두 수의 곱: %.2lf\n", x * y);
    printf("앞 수를 뒷 수로 나눈 몫: %.2lf\n", x / y);
    printf("뒷 수를 앞 수로 나눈 몫: %.2lf\n", y / x);

    return 0;
}