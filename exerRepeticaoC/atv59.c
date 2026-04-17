#include <stdio.h>

int main(){
    int n, countP = 0, countN = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira um número: ");
        scanf("%d", &n);
        if(n>0){
            countP++;
        }
        if(n<0){
            countN++;
        }
    }
    printf("Quantidade de números positivos: %d\n", countP);
    printf("Quantidade de números negativos: %d", countN);
}