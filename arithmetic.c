#include <stdio.h>

int main(){
    int x, y, result;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y;
    printf("%d + %d = %d\n", x, y, result);

    result = x - y;
    printf("%d - %d = %d\n", x, y, result);

    result = x * y;
    printf("%d * %d = %d\n", x, y, result);

    result = x / y;
    printf("%d / %d = %d\n", x, y, result);

    result = x % y;
    printf("%d %% %d = %d\n", x, y, result);  //%를 출력하려면 %%를 입력

    return 0;
}