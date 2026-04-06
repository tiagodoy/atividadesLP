#include <stdio.h>

int main() {

    int m;
    printf("Digite o número de maçãs compradas: ");
    scanf("%i", &m);
    if(m<12){
        printf("O custo da compra é %.1f reais", m*1.3);
    }else{
        printf("O custo da compra é %i reais", m*1);
    }

    return 0;
}