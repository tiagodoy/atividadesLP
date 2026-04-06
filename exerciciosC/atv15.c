#include <stdio.h>

int main() {

    float n;
    printf("Digite o valor: ");
    scanf("%f", &n);
    if(n<0){
        printf("É negativo");
    }else{
        printf("É positivo");
    }

    return 0;
}