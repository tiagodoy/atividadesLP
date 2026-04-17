#include <stdio.h>

int main(){
    float n, count = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira um número: ");
        scanf("%f", &n);
        count = count + n;
    }
    printf("Soma total: %.2f\n", count);

}