#include <stdio.h>
#include <stdlib.h>

int seat[10] = {0};

void line(){
    printf("------------------------------------------\n");
}

int menu(){
    int menu_num;

    printf("1. 예약\n2. 예약 취소\n3. 종료\n메뉴를 선택하세요: ");
    scanf("%d", &menu_num);

    return menu_num;   
}

void seat_num(){
    for(int i = 1; i <= 10; i++){
        printf("%d\t", i);
    }
    printf("\n");
}

void remain_seat(){
    for(int i = 0; i < 10; i++){
        printf("%d\t", seat[i]);
    }
    printf("\n");
}

int main(){
    int SN;

    line();

    while(1){
        switch (menu()){
            case 1:{
                line();
                seat_num();
                
                line();
                remain_seat();
                
                line();
                printf("예약할 좌석 번호를 입력하시오: ");
                scanf("%d", &SN);
                
                if(seat[SN] == 1){
                    printf("이미 예약된 자리입니다.\n");
                    break;
                }
                else if(seat[SN] == 0){
                    seat[SN]++;
                    printf("예약되었습니다.\n");
                    break;
                }
                else{
                    printf("비정상 종료...");
                    exit(EXIT_FAILURE);
                }
            }
            case 2:{
                line();
                seat_num();

                line();
                remain_seat();
                
                line();
                printf("예약을 취소할 좌석 번호를 입력하시오: ");
                scanf("%d", &SN);

                if(seat[SN] == 0){
                    printf("아직 예약되지 않은 자리입니다.\n");
                    break;
                }
                else if(seat[SN] == 1){
                    seat[SN]--;
                    printf("예약 취소되었습니다.\n");
                    break;
                }
                else{
                    printf("비정상 종료");
                    exit(EXIT_FAILURE);
                }
            }
            case 3:
                printf("정상 종료...");
                exit(EXIT_SUCCESS);

            default:
                printf("비정상 종료...");
                exit(EXIT_FAILURE);
        }
    } 
}