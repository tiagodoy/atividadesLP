#include <stdio.h>

int main() {

    float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = ((f-32)/9)*5;
    printf("O temperatura em Celsius é: %.2f\n", c);

    return 0;
}