#include <stdio.h>

int main() {
    int v, r;
    float m, kl, l1, kmtotal, ltotal;
    printf("Comprimento da pista (m): ");
    scanf("%f", &m);
    printf("Total de voltas: ");
    scanf("%d", &v);
    printf("Reabastecimentos: ");
    scanf("%d", &r);
    printf("Consumo (Km/L): ");
    scanf("%f", &kl);
    
    kmtotal = (m / 1000.0) * v;
    ltotal = kmtotal / kl;
    l1 = ltotal / (r + 1);
    
    printf("Litros até o primeiro reabastecimento: %.2f\n", l1);
    return 0;
}