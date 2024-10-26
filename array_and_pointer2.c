#include <stdio.h>

int main(){
    int array[5] = {10, 20, 30, 40, 50};

    printf("array = %p\n", array);

    printf("++array = %p\n", array + 1);  //array++ 혹은 ++array를 사용하면 컴파일 오류가 발생함.

    printf("*array = %d\n", *array);

    printf("++*array = %d\n", ++*array);

    printf("*(array++) = %d\n", *(array + 1));

    return 0;
}