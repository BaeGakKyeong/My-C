#include <stdio.h>

int main(){
    char src[] = "Action speaks louder than words.";

    char dst[100] = {'\0'};

    printf("원본 문자열: %s\n", src);

    for(int i = 0; src[i] != '\0'; i++){
        dst[i] = src[i];
    }

    printf("복사된 문자열: %s\n", dst);

    return 0;
}