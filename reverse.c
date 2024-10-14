#include <stdio.h>
#include <math.h>


int each_of_num(int n){
    int k = 1;
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= i; j++){
            k *= 10;    //n = n * 10
        } 

    }

}

int main(){
    int num;

    printf("자연수를 입력하시오: ");
    scanf("%d", &num);

    
}