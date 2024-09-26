#include <stdio.h>

void line(){
    printf("--------------------------------------------------------------------------------------------\n");
}

int main(){
    int seat[10];
    int seat_for_R;
    char YoN;

    for(int k = 1; k <= 10; k++){
        seat[k] = 0;
    }

    while(1){
        printf("좌석을 예약하시겠습니까? (y 또는 n): ");
        scanf(" %c", &YoN); //문자를 입력받아 반복루프를 돌 때, 버퍼에 남은 줄바꿈 문자를 지우기 위해 공백을 써 주여야 함. 
        
        if(YoN == 'y'){
            line(); //---------------------
            for(int i = 1; i <= 10; i++){
                printf("%d\t", i);
            }
            printf("\n");
            line(); //---------------------
            for(int j = 1; j <= 10; j++){
                printf("%d\t", seat[j]);
            }
            
            printf("\n좌석 번호를 입력하시오: ");
            INPUT_SEAT_NUM :
            scanf("%d", &seat_for_R);

            if (seat_for_R < 1 || seat_for_R > 10){     //해당하는 좌석번호가 없으면 다시 입력
                printf("좌석번호를 다시 입력해 주세요: ");
                goto INPUT_SEAT_NUM; 
            }
            

            if(seat[seat_for_R] == 1){
                printf("이미 예약된 좌석입니다.\n");
                continue;
            }

            seat[seat_for_R]++;

            printf("예약되었습니다.\n");

        }
        else if(YoN != 'y' && YoN != 'n'){
            printf("주어진 문자가 아닙니다.\n");
            continue;
        }
        else{
            break;
        }
    }

    return 0;
}