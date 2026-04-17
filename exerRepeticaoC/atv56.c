#include <stdio.h>

int main(){
    int n;
    do{
        printf("Insira um número: ");
        scanf("%d", &n);
    }while(n <= 0 || n > 10);

    for(int i = 1; i<=10; i++){
        printf("%d\n", i*n);
    }
}