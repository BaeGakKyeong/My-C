#include <stdio.h>

int main(){
    int x, y, z, MaxV;

    printf("세 정수를 입력하시오: ");
    scanf("%d %d %d", &x, &y, &z);

    MaxV = x > y ? x : y;
    MaxV = MaxV > z ? MaxV : z;

    printf("최대값은 %d입니다.\n", MaxV);

    return 0;
}