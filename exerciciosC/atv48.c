#include <stdio.h>

int main() {
    float n1, n2, n3, m;
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    printf("Insira a nota da prova optativa: ");
    scanf("%f", &n3);

    if (n3 > n1 && n3 < n2) n1 = n3;
    if (n3 > n2 && n3 < n1) n2 = n3;
    if (n3 > n1 && n3 > n2 && n1 > n2) n2 = n3;
    if (n3 > n1 && n3 > n2 && n2 > n1) n1 = n3;
    if (n3 > n1 && n3 > n2 && n1 == n2) n1 = n3;

    m = (n1 + n2) / 2;

    if (m >= 6) {
        printf("Aprovado\n");
    } else {
        if (m < 6 && m >= 3) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }
    return 0;
}