#include <stdio.h>
#define TAX_RATE 0.2

int main(){
    const int MONTHS = 12;
    int m_salery, y_salery;

    printf("월급을 입력하시오: ");
    scanf("%d", &m_salery);

    y_salery = m_salery * MONTHS;
    printf("연봉은 %d 입니다. \n", y_salery);
    printf("세금은 %f 입니다. \n", (float)y_salery * TAX_RATE);

    return 0;
}