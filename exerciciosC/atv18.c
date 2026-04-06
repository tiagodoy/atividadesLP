#include <stdio.h>

int main() {
    float c, l, a, p, w, lamp;
    printf("Insira o comprimento do cômodo (m): ");
    scanf("%f", &c);
    printf("Insira a largura do cômodo (m): ");
    scanf("%f", &l);
    printf("Insira a potência da lâmpada (watts): ");
    scanf("%f", &p);
    
    a = c * l;
    w = 18.0 * a;
    lamp = w / p;
    printf("O total de lâmpadas necessárias é %.1f\n", lamp);
    return 0;
}