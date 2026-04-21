#include <stdio.h>

int main(){
    float V[30], x, count = 0;
    for(int i = 0; i < 30; i++){
        printf("insira o %d° número: ", i+1);
        scanf("%f", &V[i]);
    }

    printf("insira outro número: ");
    scanf("%f", &x);

   
    for(int i = 0; i < 30; i++){
        if(x == V[i]){
           count++;
        }
    }

    printf("Vezes que %.2f aparece no vetor: %.f\n", x, count);
}