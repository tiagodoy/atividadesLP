#include <stdio.h>

int main() {
    float s, p, ns;
    printf("Insira o seu salário: ");
    scanf("%f", &s);
    printf("Insira o percentual de reajuste: ");
    scanf("%f", &p);
    ns = s + (s * (p / 100));
    printf("Seu novo salário é R$ %.2f\n", ns);
    return 0;
}