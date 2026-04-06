#include <stdio.h>

int main() {
    float s, v, cv, sf;
    int c;
    printf("Insira o seu salário fixo: ");
    scanf("%f", &s);
    printf("Insira o número de carros vendidos: ");
    scanf("%d", &c);
    printf("Insira o valor total de suas vendas: ");
    scanf("%f", &v);
    printf("Insira o valor recebido por carro vendido: ");
    scanf("%f", &cv);
    
    sf = s + (v * 0.05) + (c * cv);
    printf("Seu sálario final é R$%.2f\n", sf);
    return 0;
}