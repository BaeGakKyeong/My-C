#include <stdio.h>

int factorial(int num);

double euler_e(int num){

    double e = 0;

    for(int i = 0; i <= num; i++){
        e += 1.0 / (double)factorial(i);
    }

    return e;
}

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num * factorial(num - 1);
    }
}

int main(){
    int num;

    printf("어디까지 계산할까요? ");
    scanf("%d", &num);

    printf("오일러 수는 %lf입니다. ", euler_e(num));

    return 0;
}
