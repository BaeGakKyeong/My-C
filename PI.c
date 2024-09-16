//파이를 구하는 프로그램

#include <stdio.h>

int main(){
    double j = 1.0, PI; 

    for(double i = 1.0; i < 140; i = i + 2){
        PI += (4.0 / i*j);    //PI = PI + (4.0/i)
        j *= -1.0;
    }

    printf("라이프니츠 무한수열을 이용해 구한 PI값: %lf", PI);

    return 0;
}