#include <stdio.h>

void print_array(int *A, int size);

int main(){
    int A[10] = {1, 2, 3, 4, 5};

    print_array(A, 10);

    return 0;    
}

void print_array(int *A, int size){
    printf("A[] = {");

    for(int i = 0; i < size; i++){
        printf("%d", *A);
        A++;
    }
    printf("}");
}