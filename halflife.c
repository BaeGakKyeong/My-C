#include <stdio.h>

int main(){
    int half_life, time = 0;
    float vivoRI = 100.0;

    printf("반감기를 입력하시오: ");
    scanf("%d", &half_life);

    while(vivoRI > 10){
        time += half_life;
        vivoRI /= 2.0;
        printf("%d년 후에 남은 양 = %f\n", time, vivoRI);
    }

    printf("1/10 이하로 되기까지 걸린 시간 = 40");

    return 0;
}