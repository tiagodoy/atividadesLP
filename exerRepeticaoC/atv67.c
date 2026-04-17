#include <stdio.h>

int main(){
    float count = 0, media, soma = 0;
    for(int i = 15; i <=100; i++){
        soma = soma + i;
        count++;
    }
    media = soma/count;

    printf("Média dos valores inteiros entre 15 e 100: %f", media);

}