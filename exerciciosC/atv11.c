#include <stdio.h>

int main() {
    float pb, pn, pv, e, b, n, v;
    printf("Insira o total de eleitores: ");
    scanf("%f", &e);
    printf("Insira o total de votos brancos: ");
    scanf("%f", &b);
    printf("Insira o total de votos nulos: ");
    scanf("%f", &n);
    printf("Insira o total de votos válidos: ");
    scanf("%f", &v);

    pb = b / e * 100;
    pn = n / e * 100;
    pv = v / e * 100;

    printf("O percentual de votos brancos é %.2f%%\n", pb);
    printf("O percentual de votos nulos é %.2f%%\n", pn);
    printf("O percentual de votos válidos é %.2f%%\n", pv);
    return 0;
}