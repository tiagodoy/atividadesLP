#include <stdio.h>

int main(){
    float n1,n2;
    do{
        printf("Insira a primeira nota: ");
        scanf("%f", &n1);
    }while(n1<0 || n1>10);
    do{
        printf("Insira a segunda nota: ");
        scanf("%f", &n2);
    }while(n2<0 || n2>10);

    printf("Média: %.2f", (n1+n2)/2);
}