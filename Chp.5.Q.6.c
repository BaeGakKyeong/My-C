#include <stdio.h>
#include <math.h>

int main(){
    printf("1.0 - 0.9 == 0.1의 부울값은 %d 입니다", fabs((1.0 - 0.9) - 0.1) < 0.000001);

    return 0;  
}