#include <stdio.h>

int main() {
    float n1, n2, n3, m;
    printf("Insira sua primeira nota: ");
    scanf("%f", &n1);
    printf("Insira sua segunda nota: ");
    scanf("%f", &n2);
    printf("Insira sua terceira nota: ");
    scanf("%f", &n3);
    
    m = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10.0;
    printf("Sua media é %.2f\n", m);
    return 0;
}