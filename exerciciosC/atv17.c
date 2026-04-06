#include <stdio.h>

int main() {
    float r, a;
    printf("Insira o raio do círculo: ");
    scanf("%f", &r);
    a = (r * r) * 3.14159;
    printf("A area do círculo é %.2f\n", a);
    return 0;
}