#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int temp[365], menor = 41, maior = -31, media, soma = 0, diasInf = 0;
    srand(time(NULL));
    for(int i = 0; i < 365; i++) {
        temp[i] = -30 + (rand()%71); //max:40 min:-30
        printf("Temperatura dia %d: %d\n", i, temp[i]);
        if(temp[i] < menor){
            menor = temp[i];
        }
        if(temp[i] > maior){
            maior = temp[i];
        }
        soma = soma + temp[i];
    }

    media = soma / 365;

    for(int i = 0; i < 365; i++) {
        if(temp[i] < media){
            diasInf ++;
        }
    }

    printf("Menor temperatura do ano: %d\n", menor);
    printf("Maior temperatura do ano: %d\n", maior);
    printf("Temperatura média do ano: %d\n", media);
    printf("Dias com temperatura abaixo da média: %d", diasInf);

}