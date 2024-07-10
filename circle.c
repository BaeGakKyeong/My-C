//원의 면적을 구하는 프로그램
#include <stdio.h>

int main(){
    int r;
    float area;

    printf("원의 반지름을 정수로 입력하십시오: ");
    scanf("%d", &r);

    area = 3.14 * r * r;

    printf("원의 면적: %f", area);

    return 0;
}