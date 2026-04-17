#include <stdio.h>

int main(){
    float valor, soma = 0, outra = 1, count = 0;
    char sn;

    while(outra > 0){
        printf("Insira o valor da mercadoria: ");
        scanf("%f", &valor);
        soma = soma + valor;
        count ++;
        printf("Mais mercadorias (S/N)?: ");
        scanf(" %c", &sn);
        if(sn == 'S' || sn == 's'){
            outra++;
        }else{
            outra = 0;
        }
    }
    printf("Valor total em estoque: %.2f\n", soma);
    printf("Média dos valores: %.2f", soma/count);
}