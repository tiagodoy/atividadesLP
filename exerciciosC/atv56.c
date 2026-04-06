#include <stdio.h>

int main() {
    float r, n1, n2, o;
    printf("Insira o primeiro número: ");
    scanf("%f", &n1);
    printf("Insira o segundo número: ");
    scanf("%f", &n2);
    printf("Insira o código da operação: ");
    scanf("%f", &o);

    if (o == 1) {
        r = n1 + n2;
        printf("O resultado é %.2f\n", r);
    }
    if (o == 2) {
        r = n1 - n2;
        printf("O resultado é %.2f\n", r);
    }
    if (o == 3) {
        r = n1 / n2; 
        printf("O resultado é %.2f\n", r);
    }
    if (o == 4) {
        r = n1 * n2;
        printf("O resultado é %.2f\n", r);
    }
    return 0;
}