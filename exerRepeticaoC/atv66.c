#include <stdio.h>

int main(){
    int n1, n2, soma = 0;

    do{
        printf("Insira o primeiro número: ");
        scanf("%d", &n1);
        printf("Insira o segundo número: ");
        scanf("%d", &n2);
    }while(n1 > n2 || n1 == n2);

    for(int i = n1; i<=n2; i++){
        soma = soma + i;
    }
    printf("Soma dos valores: %d", soma);
}