#include <stdio.h>

int main(){
    int x, y;
    
    printf("정수 두개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", x, y, x || y);
    printf("!%d = %d\n!%d = %d", x, !x, y, !y);

    return 0;
}