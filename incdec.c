#include <stdio.h>

int main(){
    int x = 10, y = 10;

    printf("x = %d\n", x);
    printf("++x = %d\n", ++x);  //해당 수식에서 +1이 됨
    printf("x = %d\n\n", x);

    printf("y = %d\n", y);
    printf("y++ = %d\n", y++);  //연산이 모두 종료된 후, 다음에 +1이 됨
    printf("y = %d\n", y);

    return 0;
}