#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...);

int main(){
    int total = sum(4, 4, 3, 2, 1);

    printf("합은 %d입니다.", total);

    return 0;
}

int sum(int num, ...){
    int total = 0;

    va_list argptr;

    va_start(argptr, num);
    for(;num > 0; num--){
        total += va_arg(argptr, int);
    }

    va_end(argptr);

    return total;
}