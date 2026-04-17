#include <stdio.h>

int main(){
    float n1,n2;
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);
    do{
        printf("Insira o segundo número: ");
        scanf("%f", &n2);
    }while(n2==0);

    printf("Divisão dos números: %.2f", n1/n2);
}