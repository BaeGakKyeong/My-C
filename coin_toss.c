#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_num(){
    srand((unsigned)time(NULL));

    return rand() % 1;
}

int main(){
    int num, head = 0, tail;

    printf("코인토스를 실행할 횟수를 입력해 주세요: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if(random_num()){
            head++;
        }
    }

    tail = num - head;

    printf("코인을 %d번 던졌을 때\n앞면: %d\n뒷면: %d\n", num, head, tail);

    return 0;
}