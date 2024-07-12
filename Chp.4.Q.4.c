#include <stdio.h>

int main(){
    double width, hight, length;
    
    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &width, &length, &hight);

    printf("상자의 부피는 %lf입니다.", width * length * hight);

    return 0;
}