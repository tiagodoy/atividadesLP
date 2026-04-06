#include <stdio.h>

int main() {

    float s, p;
    printf("Digite o seu salário: ");
    scanf("%f", &s);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &p);
    printf("O valor do seu novo salário é: %.2f reais\n", s+(s*(p/100)));

    return 0;
}