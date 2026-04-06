#include <stdio.h>

int main() {

    float n1, n2, n3, m;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    m = ((n1*2)+(n2*3)+(n3*5))/10;
    printf("Amédia final é: %.2f\n", m);

    return 0;
}