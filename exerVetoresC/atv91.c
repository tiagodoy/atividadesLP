#include <stdio.h>

int main(){
    float VET[50], count = 0;
    for(int i = 0; i < 50; i++) {
        printf("insira o %d° número: ", i+1);
        scanf("%f", &VET[i]);
    }

    for(int i = 0; i < 50; i++) {
            for(int d = i + 1; d < 50; d++){
                if(VET[i] == VET[d]){
                    printf("Valor igual encontrado nas posições %d e %d\n", i, d);
                    count++;
                }
            }
    }

    if(count == 0){
        printf("Não há valores iguais no vetor");
    }

}