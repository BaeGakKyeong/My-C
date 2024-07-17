#include <stdio.h>

int main(){
    int x, y;

    x = 1;
    printf("수식 x + 1의 값은 %d\n", x + 1);
    printf("수식 y = x + 1의 값은 %d\n", y = x + 1);
    printf("%d\n", y);                              //위 y = x + 1의 수식이 한 문장으로 취급되어 계산된 것을 확인할 수 있다.
    printf("수식 y = 10 + (x = 2 + 7)의 값은 %d\n", y = 10 + (x = 2 + 7));
    printf("수식 y = x = 3의 값은 %d\n", y = x = 3);

    return 0;
}