#include <stdio.h>

int main(){
    float nTotal, valor, soma = 0;
    printf("Insira o número total de mercadorias: ");
    scanf("%f", &nTotal);

    for(int i = 1; i <= nTotal; i++){
        printf("Insira o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        soma = soma + valor;
    }
    printf("Valor total em estoque: %.2f\n", soma);
    printf("Média dos valores: %.2f", soma/nTotal);
}