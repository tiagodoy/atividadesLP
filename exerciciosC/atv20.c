#include <stdio.h>

int main() {

    float n1, n2;
    printf("Digite o primeiro valor ");
    scanf("%f", &n1);
    printf("Digite o segundo valor ");
    scanf("%f", &n2);
    if(n1>n2){
        printf("%.2f, %.2f", n2, n1);
    }else{
        printf("%.2f, %.2f", n1, n2);
    }

    return 0;
}