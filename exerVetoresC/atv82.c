#include <stdio.h>

int main(){
    float A[9], x, M[9];
    for(int i = 0; i <= 9; i++){
        printf("insira o %d° número: ", i+1);
        scanf("%f", &A[i]);
    }

    printf("insira um valor para multiplicação: ");
    scanf("%f", &x);

    for(int i = 0; i <= 9; i++){
        M[i] = A[i] * x;
        printf("Multiplicação do %d° número: %.f\n", i+1, M[i]);
    }
}