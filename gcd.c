#include <stdio.h>

int main(){
    int m_num, M_num, GCD;

    printf("두 자연수를 입력하시오(큰 수 먼저): ");
    scanf("%d %d", &M_num, &m_num);

    for(int i = 1; i <= m_num; i++){
        if(m_num % i == 0){
            if(M_num % i == 0){
                GCD = i;
            }
        }
    }

    printf("%d와 %d의 최대공약수는 %d입니다.", M_num, m_num, GCD);

    return 0;
}