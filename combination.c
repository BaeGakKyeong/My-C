//조합(combination) 계산기
#include <stdio.h>

int factorial(int x){               //코드 수정: combination값을 바로 계산하지 않고, 더 작은 기능인 factorial값을 계산하는 함수를 사용(세분화)
    int fac = 1;
    for(int i = 1; i <= x; i++){
        fac *= i;
    }

    return fac;
}

int combination(int x, int y){      //코드 수정2: main함수에서 factorial함수만을 이용해서 combination을 구하지 않고, 기능을 더 세분화 함
    int Nfac = factorial(x);        //이때, main함수 외의 함수에서, 다른 함수를 호출하는 것이 가능함.(아이패드 공부 노트 참조)
    int Rfac = factorial(y);
    int NmRfac = factorial(x - y);

    return Nfac / (Rfac * NmRfac);
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
        int i = 1;
    }

    return 0;    
}