#include <stdio.h>

int main(){
    float width, hight, area;

    printf("삼각형의 밑변: ");
    scanf("%f", &width);
    printf("삼각형의 높이: ");
    scanf("%f", &hight);

    area = width * hight * 0.5;
    printf("삼각형의 넓이: %.2f", area);

    return 0;
}