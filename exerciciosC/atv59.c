#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("Insira o primeiro ângulo: ");
    scanf("%f", &n1);
    printf("Insira o segundo ângulo: ");
    scanf("%f", &n2);
    printf("Insira o terceiro ângulo: ");
    scanf("%f", &n3);

    if (n1 + n2 + n3 != 180) {
        printf("Não é um triângulo\n");
    } else {
        if (n1 == 90 || n2 == 90 || n3 == 90) {
            printf("Triângulo retângulo\n");
        } else {
            if (n1 > 90 || n2 > 90 || n3 > 90) {
                printf("Triângulo obtusângulo\n");
            } else {
                printf("Triângulo acutângulo\n");
            }
        }
    }
    return 0;
}