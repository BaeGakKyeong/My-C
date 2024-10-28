#include <stdio.h>
#include <math.h>

void get_frac(float f, int *pi, float *pf);

int main(){
    float n;
    int pi = 0;
    float pf = 0;

    printf("양의실수를 입력하시오: ");
    scanf("%f", &n);

    if((n - floor(n)) >= 0.001){
        get_frac(n, &pi, &pf);
        printf("get_frac()이 실행되었습니다\n");
    }    

    printf("정수부: %d\n실수부: %f", pi, pf);

    return 0;
}

void get_frac(float f, int *pi, float *pf){
    *pf = f - (int)f;
    *pi = (int)f;
}