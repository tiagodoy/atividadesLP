#include <stdio.h>

int main() {

    float m, cm;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    cm = m*100;
    printf("O valor em centímetros é: %.2f\n", cm);

    return 0;
}