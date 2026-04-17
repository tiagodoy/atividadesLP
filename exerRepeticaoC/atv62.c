#include <stdio.h>

int main(){
    int a;
    float n, media, count = 0;

    printf("Insira o número de alunos: ");
        scanf("%d", &a);

    for(int i = 1; i<=a; i++){
        printf("Insira a nota do aluno %d: ", i);
        scanf("%f", &n);
        count = count + n;
    }
    media = count/a;
    printf("Média: %.2f", media);
    
}