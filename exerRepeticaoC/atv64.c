#include <stdio.h>

int main(){
    float n, count = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira um número: ");
        scanf("%f", &n);

        if(n<40){
            count = count + n;
        }
    }
    printf("Soma dos valores inferiores a 40: %.2f\n", count);

}