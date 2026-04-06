#include <stdio.h>

int main() {
    int nl;
    float ml, a, p;
    printf("Insira o número de lados do polígono: ");
    scanf("%d", &nl);
    printf("Insira a medida do lado do polígono: ");
    scanf("%f", &ml);

    if (nl == 4) {
        a = ml * ml;
        printf("Quadrado com área de %.2f cm quadrados\n", a);
    } else {
        if (nl == 3) {
            p = ml * 3;
            printf("Triângulo com perímetro de %.2f cm\n", p);
        } else {
            if (nl == 5) {
                printf("Pentágono\n");
            } else {
                if (nl > 5) {
                    printf("Polígono não identificado\n");
                } else {
                    printf("Não é um polígono\n");
                }
            }
        }
    }
    return 0;
}