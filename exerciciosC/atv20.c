#include <stdio.h>

int main() {
    float kmi, kmf, lit, val, mc, lucro;
    printf("Odômetro inicio: ");
    scanf("%f", &kmi);
    printf("Odômetro fim: ");
    scanf("%f", &kmf);
    printf("Litros gastos: ");
    scanf("%f", &lit);
    printf("Valor recebido: ");
    scanf("%f", &val);
    
    mc = (kmf - kmi) / lit;
    lucro = val - (lit * 2.90); 
    
    printf("Consumo: %.2f Km/L\nLucro Líquido: R$ %.2f\n", mc, lucro);
    return 0;
}