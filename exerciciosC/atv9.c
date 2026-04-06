#include <stdio.h>

int main() {
    float l, a;
    printf("Insira o lado do quadrado: ");
    scanf("%f", &l);
    a = l * l;
    printf("O valor do dobro da area do quadrado é %.2f\n", a * 2);
    return 0;
}