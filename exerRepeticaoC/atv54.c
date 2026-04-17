#include <stdio.h>

int main(){
    int n;
    do{
        printf("Insira um número: ");
        scanf("%d", &n);
    }while(n <= 0);
    for(int i = 1; i<=n; i++){
        printf("%d\n", i);
    }
}