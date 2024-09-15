#include <stdio.h>

int main(){
    char ascii;

    do{
        printf("대문자 영문자를 입력하시오: ");
        scanf("%c", &ascii);

    }while(ascii < 'A' || ascii > 'Z');

    printf("%c의 소문자는 %c입니다.", ascii, ascii + 32);

    return 0;
}