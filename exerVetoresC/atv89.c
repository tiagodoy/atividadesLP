#include <stdio.h>

int main(){
    float V1[14], V2[14], count = 0;
    for(int i = 0; i < 14; i++){
        printf("insira o %d° número do vetor 1: ", i+1);
        scanf("%f", &V1[i]);
        printf("insira o %d° número do vetor 2: ", i+1);
        scanf("%f", &V2[i]);

        if(V1[i] == V2[i]){
            count++;
        }
    }

    printf("Contagem de números iguais e na mesma posição: %.f", count);
}