#include <stdio.h>

int main(){
    const float PI = 3.14;
    float radius;

    printf("구의 반지름을 입력하시오: ");
    scanf("%f", &radius);

    printf("구의 표면적은 %.2f입니다\n", 4.0 * PI * radius * radius);
    printf("구의 체적은 %.2f입니다\n", (4.0 / 3.0) * PI * radius * radius * radius);

    return 0;
}