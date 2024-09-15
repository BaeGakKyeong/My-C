#include <stdio.h>

int main(){
    char ascii;

    do{
        printf("대문자 영문자를 입력하시오: ");
        scanf("%c", &ascii);
    }while(ascii < 'a' || ascii > 'z');

    return 0;
}