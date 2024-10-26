#include <stdio.h>

int main(){
    int array[3];

    for(int i = 0; i < 3; i++){
        printf("&array[%d] = %p\n", i, &array[i]);
    }

    return 0;
}