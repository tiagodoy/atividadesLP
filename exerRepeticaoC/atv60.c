#include <stdio.h>

int main(){
    int n, dentro = 0, fora = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira um número: ");
        scanf("%d", &n);
        if(n>=10 && n<=20){
            dentro++;
        }else{
            fora++;
        }
        
    }
    printf("Números no intervalo [10;20]: %d\n", dentro);
    printf("Números fora do intervalo [10;20]: %d", fora);
}