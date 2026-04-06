#include <stdio.h>

int main() {
    float c, l, a, box, area;
    printf("Insira o comprimento: ");
    scanf("%f", &c);
    printf("Insira a largura: ");
    scanf("%f", &l);
    printf("Insira a altura: ");
    scanf("%f", &a);
    
    area = (c * a * 2) + (l * a * 2);
    box = area / 1.5;
    printf("A quantidade de caixas de azulejo é %.2f\n", box);
    return 0;
}