//조합(combination) 계산기
#include <stdio.h>

int factorial(int x){               //코드 수정: combination값을 바로 계산하지 않고, 더 작은 기능인 factorial값을 계산하는 함수를 사용(세분화)
    int Fac = 1;
    for(int i = 1; i <= x; i++){
        Fac *= i;
    }

    return Fac;
}

int main(){
    int n, r, nFac, rFac, nMrFac;   //n, r, n_Factorial, r_Factorial, n_minus_r_factoral
    
    printf("조합(combination) 계산기\n큰 자연수와 작은 자연수를 차례로 입력하시오: ");
    INPUT:
    scanf("%d %d", &n, &r);

    if (n < r){
        printf("수를 다시 입력해 주세요: ");
        goto INPUT;
    }
    else{
        nFac = factorial(n);
        rFac = factorial(r);
        nMrFac = factorial(n-r);

        printf("C(n, r)값은 %d입니다.", nFac / (rFac * nMrFac));
    }

    return 0;    
}