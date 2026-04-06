#include <stdio.h>

int main() {

    float s, v, cv, sf;
    int c;
    printf("Digite o seu salário fixo: ");
    scanf("%f", &s);
    printf("Digite o número de carros vendidos: ");
    scanf("%i", &c);
    printf("Digite o valor total de suas vendas: ");
    scanf("%f", &v);
    printf("Digite o valor recebido por carro vendido: ");
    scanf("%f", &cv);
    sf = s+(v*0.05)+(c*cv);
    printf("O valor do seu salário final é: %.2f reais\n", sf);

    return 0;
}