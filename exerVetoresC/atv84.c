#include <stdio.h>

int main(){
    int n;
    printf("insira um número inteiro: ");
    scanf("%d", &n);

    n = n-1;
    float A[n], B[n], soma[n];

    for(int i = 0; i <= n; i++){
        printf("insira o %d° número para A: ", i+1);
        scanf("%f", &A[i]);
        printf("insira o %d° número para B: ", i+1);
        scanf("%f", &B[i]);
    }

    for(int i = 0; i <= n; i++){
        soma[i] = A[i] + B[i];
    }

   
    for(int i = 0; i <= n; i++){
        printf("%d° número da soma: %.f\n", i+1, soma[i]);
    }
}