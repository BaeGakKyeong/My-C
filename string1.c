#include <stdio.h>

int main(){
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    
    return 0;
}