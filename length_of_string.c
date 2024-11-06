#include <stdio.h>

int main(){
    char string[] = "C language is easy.";

    int i = 0;
    while(string[i] != '\0'){
        i++;
    }

    printf("문자열의 길이는 %d입니다.", --i);

    return 0;
}