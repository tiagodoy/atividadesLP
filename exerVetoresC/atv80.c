#include <stdio.h>

int main(){
    float Q[19], maior = -1, pose = -1;
    for(int i = 0; i <= 19; i++){
        do{
            printf("insira o %d° número positivo: ", i+1);
            scanf("%f", &Q[i]);
        }while(Q[i] < 0);
    }
    for(int i = 0; i <= 19; i++){
        if(Q[i] > maior){
            maior = Q[i];
            pose = i+1;
        }
    }

    printf("Maior elemento do vetor: %.2f\n", maior);
    printf("Posição do elemento: %.f\n", pose);
}