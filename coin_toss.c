#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_num(){
    srand((unsigned)time(NULL));

    return rand() % 2;  //1로 나눈 나머지는 항상 0이기 때문에, 0 또는 1을 반환하려면 2로 나눠야 한다.
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