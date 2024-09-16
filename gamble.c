/*
한판에 1달러인 게임을 진행해서 50퍼센트 확률로 
이기면 2달러를, 지면 0달러를 얻는 게임을 한다고 가정하자.
초기금액과 목표금액을 입력받아, 100번 중 목표 금액에
달성하는 횟수를 출력하라. 이떄 입력받는 금액은 정수로 받는다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int initial, goal, x, i, count = 0;
    srand((unsigned)time(NULL));

    printf("초기 금액을 입력하시오(달러): ");
    scanf("%d", &initial);

    printf("목표 금액을 입력하시오(달러): ");
    scanf("%d", &goal);

    for(i = 1; i <= 100; i++){
        int current = initial;
        while(1){
            x = rand() % 2;

            if(x){
                current++;
            }
            else{
                current--;
            }

            if(current == 0){
                break;
            }
            else if(current == goal){
                count++;
                break;
            }
            else{
                continue;
            }
        }
    }   
    printf("목표금액에 도달한 경우: 100번 중 %d번", count);

    return 0;
}