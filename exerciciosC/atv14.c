#include <stdio.h>

int main() {

    float n;
    printf("Digite o valor: ");
    scanf("%f", &n);
    if(n>10){
        printf("É MAIOR QUE 10");
    }else{
        printf("NÃO É MAIOR QUE 10");
    }

    return 0;
}