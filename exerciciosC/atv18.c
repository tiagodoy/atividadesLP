#include <stdio.h>

int main() {

    int a, an;
    printf("Digite o ano atual ");
    scanf("%i", &a);
    printf("Digite o seu ano de nascimento ");
    scanf("%i", &an);
    if(a-an>=16){
        printf("Você pode votar");
    }else{
        printf("Você não pode votar ainda");
    }

    return 0;
}