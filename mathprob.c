#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x, y, answer, i, count = 0;
    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++){
        x = rand() % 10;
        y = rand() % 10;

        printf("%d + %d = ", x, y);
        scanf("%d", &answer);

        if(answer == x + y){
            printf("정답입니다.\n");
            count++;
        }
        else{
            printf("오답입니다.\n");
        }
    }

    printf("10문제 중 맞힌 개수: %d개", count);

    return 0;
}