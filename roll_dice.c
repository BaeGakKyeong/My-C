#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>

int user_dice(){
    srand((unsigned)time(NULL));

    return 1 + rand() % 6;
}

int computer_dice(){
    int sum_computer = 0, random_num;

    for(int i = 1; i <= 3; i++){
        sleep(1);
        random_num = user_dice();
        printf("%d\n", random_num);

        sum_computer += random_num;
    }

    return sum_computer;
}

int main(){
    char enter, random_num;
    int sum_user = 0, sum_computer;

    printf("사용자의 주사위... \n(주사위를 굴리려면 엔터를 입력하시오)");
    
    for (int i = 0; i < 3; i++){
        scanf("%c", &enter);
        
        if(enter == '\n'){
            random_num = user_dice();
            printf("%d", random_num);

            sum_user += random_num;
        } 
        else{
            printf("잘못된 문자가 입력되었습니다.");
            exit(EXIT_FAILURE);
        }
    }

    printf("\n사용자 주사위의 합계: %d\n", sum_user);

    sum_computer = computer_dice();
    printf("컴퓨터의 주사위... %d\n", sum_computer);

    if(sum_user > sum_computer){
        printf("사용자 승리");
    }
    else if(sum_computer > sum_user){
        printf("사용자 패배");
    }
    else{
        printf("비겼습니다.");
    }

    return 0;
}