//조합(combination) 계산기
#include <stdio.h>

int combination(int x, int y){
    int R_fac = 1, NmR_fac = 1;     //r factorial, n - r factorial

    for(int i = 1; i <= y; i++){
        R_fac *= i;
    }

    for(int j = 1; j <= x - y; j++){
        NmR_fac *= j;
    }

    return R_fac / NmR_fac * R_fac;
}

int main(){
    int n, r;
    
    printf("조합(combination) 계산기\n큰 자연수와 작은 자연수를 차례로 입력하시오: ");
    INPUT:
    scanf("%d %d", &n, &r);

    if (n < r){
        printf("수를 다시 입력해 주세요: ");
        goto INPUT;
    }
    else{
        printf("C(n, r)값은 %d입니다.", combination(n, r));
    }

    return 0;    
}