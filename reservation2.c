#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 10
#define COL 10

void line();
int menu();
void seat_chart(int seat[][COL]);
int input_row();
char input_col();
void change_seat(int seat[][COL], int row, char col);
int IDandPW();
int identify_ID(char ID[]);

int main(){
    int seat[ROW][COL] = {0}, row, col;

    while(1){
        line();
        if(IDandPW()){
            line();
            switch(menu()){
                case 1:                 //예약
                    seat_chart(seat);

                    row = input_row() - 1;
                    col = input_col() - 65;

                    if(seat[row][col] != 0){
                        printf("이미 예약된 좌석입니다.\n");
                        break;
                    }
                    else{
                        change_seat(seat, row, col);
                        printf("예약되었습니다.\n");
                        seat_chart(seat);
                        break;
                    }

                case 2:                 //예약취소
                    seat_chart(seat);

                    row = input_row() - 1;
                    col = input_col() - 65;

                    if(seat[row][col] != 1){
                        printf("예약되지 않은 좌석입니다.\n");
                        break;
                    }
                    else{
                        change_seat(seat, row, col);
                        printf("예약이 취소되었습니다.\n");
                        seat_chart(seat);
                        break;
                    }

                case 3: 
                    exit(EXIT_SUCCESS);
                default:
                    exit(EXIT_FAILURE);
            }
        }
    }
}

void line(){
    printf("------------------------------------------------------------------------------------------\n");
}

int menu(){
    int menu_num;

    printf("1. 예약\n2. 예약취소\n3. 종료\n");
    line();
    printf("메뉴를 선택하시오... ");
    scanf("%d", &menu_num);

    return menu_num;
}

void seat_chart(int seat[][COL]){
    line();
    printf("\t\t\t\t\tscreen\n");

    printf("\t|");
    for(char c = 65; c < 75; c++){
        printf("\t%c", c);
    }
    printf("\n");
    line();

    for(int i = 0; i < COL; i++){
        printf("%d\t|", i + 1);
        for(int j = 0; j < ROW; j++){
            printf("\t%d", seat[i][j]);
        }
        printf("\n");
    }
    line();  
}

int input_row(){
    int row;

    printf("행을 입력하시오(숫자)... ");
    scanf("%d", &row);

    return row;
}

char input_col(){
    char col;

    printf("열을 입력하시오(알파벳 대문자)... ");
    scanf(" %c", &col);

    return col;
}

void change_seat(int seat[][COL], int row, char col){
    if(seat[row][col]){
        seat[row][col] = 0;
    }
    else{
        seat[row][col] = 1;
    }
}

int IDandPW(){
    char ID[20] = "";
    char PW[30] = "";

    printf("ID: ");
    scanf("%s", ID);
    
    switch (identify_ID(ID)){
    case 1:
        printf("PW: ");
        scanf("%s", PW);
        
        if(strcmp(PW, "1111") == 0){
            return 1;
        }
        else{
            printf("비밀번호가 틀렸습니다.\n");
            return 0;
        }

    case 2:
        printf("PW: ");
        scanf("%s", PW);

        if(strcmp(PW, "2222") == 0){
            return 2;
        }
        else{
            printf("비밀번호가 틀렸습니다.\n");
            return 0;
        }

    case 3:
        printf("PW: ");
        scanf("%s", PW);

        if(strcmp(PW, "3333") == 0){
            return 3;
        }
        else{
            printf("비밀번호가 틀렸습니다.\n");
            return 0;
        }

    case 4:
        printf("PW: ");
        scanf("%s", PW);

        if(strcmp(PW, "4444") == 0){
            return 4;
        }
        else{
            printf("비밀번호가 틀렸습니다.\n");
            return 0;
        }
    
    default:
        printf("존재하지 않는 아이디입니다.\n");
        return 0;
    }
    
}

int identify_ID(char ID[]){
    if(strcmp(ID, "test1") == 0){
        return 1;
    }
    else if(strcmp(ID, "test2") == 0){
        return 2;
    }
    else if(strcmp(ID, "test3") == 0){
        return 3;
    }
    else if(strcmp(ID, "test4") == 0){
        return 4;
    }
    else{
        return 0;
    }
}
