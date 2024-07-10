#include <stdio.h>

int main(){
    float annual_income, year;
    
    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%f", &annual_income);

    year = 100000 / annual_income;
    printf("10억을 모으는데 걸리는 시간: %.2f년", year);

    return 0;
}