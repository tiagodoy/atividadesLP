#include <stdio.h>

int main() {

    float e, vb, vn, vv;
    printf("Digite o nímero de eleitores: ");
    scanf("%f", &e);
    printf("Digite o nímero de votos brancos: ");
    scanf("%f", &vb);
    printf("Digite o nímero de votos nulos: ");
    scanf("%f", &vn);
    printf("Digite o nímero de votos válidos: ");
    scanf("%f", &vv);
    
    printf("O percentual de votos brancos é: %.2f%%\n", (vb*100)/e);
    printf("O percentual de votos nulos é: %.2f%%\n", (vn*100)/e);
    printf("O percentual de votos válidos é: %.2f%%\n", (vv*100)/e);

    return 0;
}