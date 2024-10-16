#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand((unsigned)time(NULL));
    int each_face;
    int sum_face[6] = {0};

    for(int i = 0; i < 10000; i++){
        each_face = rand() % 6;
        sum_face[each_face]++;        
    }

    for(int i = 1; i <= 6; i++){
        printf("face %d : %d\n", i, sum_face[i - 1]);
    }

    return 0;
}