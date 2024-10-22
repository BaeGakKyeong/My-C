#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 3
#define COL 5


int main(){
    srand((unsigned)time(NULL));
    
    int array[ROW][COL];

    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            array[i][j] = rand() % 100;
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}