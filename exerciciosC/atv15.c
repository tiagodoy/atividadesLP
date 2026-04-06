#include <stdio.h>

int main() {
    float f, c;
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32.0) / 9.0) * 5.0;
    printf("A temperatura em Celsius é %.2f\n", c);
    return 0;
}