#include <stdio.h>

int main() {

    float cfab, cfim;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &cfab);
    cfim = cfab + (cfab*0.28) + (cfab*0.45);
    printf("O custo final do carro é: %.2f reais\n", cfim);

    return 0;
}