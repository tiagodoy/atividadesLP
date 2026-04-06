#include <stdio.h>

int main() {
    float cfab, cfim;
    printf("Insira o custo de fábrica do carro: ");
    scanf("%f", &cfab);
    cfim = cfab + (cfab * 0.28) + (cfab * 0.45);
    printf("O custo final do carro é R$%.2f\n", cfim);
    return 0;
}