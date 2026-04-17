#include <stdio.h>

int main(){
    int n, count = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira um número: ");
        scanf("%d", &n);
        count = count + n;
    }
    printf("Média: %d\n", count/10);
    
}