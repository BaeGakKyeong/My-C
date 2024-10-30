#include <stdio.h>

int show_digit(int x);

int main(){
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    show_digit(n);

    return 0;
}

int show_digit(int x){
    static int devide  = 10000;

    printf("%d\t", (x % devide) - (x % (devide / 10)));

    devide /= 10;

    if(devide < 10){
        return 0;
    }
    else{
        return show_digit(x);
    }
}