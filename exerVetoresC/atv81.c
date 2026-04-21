#include <stdio.h>

int main(){
    float Q[20], menor, pose = -1;
    for(int i = 0; i < 20; i++){
        do{
            printf("insira o %d° número positivo: ", i+1);
            scanf("%f", &Q[i]);
        }while(Q[i] < 0);
        menor = Q[i];
        pose = i+1;
    }
    for(int i = 0; i < 20; i++){
        if(Q[i] < menor){
            menor = Q[i];
            pose = i+1;
        }
    }

    printf("Menor elemento do vetor: %.2f\n", menor);
    printf("Posição do elemento: %.f\n", pose);
}