#include <stdio.h>

int main() {
    float vh, h, s;
    printf("Insira quanto você ganha por hora trabalhada: ");
    scanf("%f", &vh);
    printf("Insira quantas horas você trabalha por mês: ");
    scanf("%f", &h);
    s = vh * h;
    printf("Seu salário por mês é R$ %.2f\n", s);
    return 0;
}