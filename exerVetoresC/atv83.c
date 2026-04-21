#include <stdio.h>

int main(){
    float V[19];
    for(int i = 0; i <= 19; i++){
        printf("insira o %d° número: ", i+1);
        scanf("%f", &V[i]);
    }

   
    for(int i = 19; i >= 0; i--){
        printf("%d° número: %.f\n", i+1, V[i]);
    }
}