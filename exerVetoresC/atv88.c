#include <stdio.h>

int main(){
    float V[19], x;
    for(int i = 0; i < 20; i++){
        printf("insira o %d° número: ", i+1);
        scanf("%f", &V[i]);
    }

    printf("insira outro número: ");
    scanf("%f", &x);

   
    for(int i = 0; i < 20; i++){
        if(x == V[i]){
           V[i] = 100;
           break;
        }
    }

    for(int i = 0; i < 20; i++){
        printf("%d° número do vetor: %.2f\n", i+1, V[i]);
    }
}