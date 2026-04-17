#include <stdio.h>

int main(){
    float nota[19], soma = 0, media, acimaMedia = 0;
    for(int i = 0; i <= 19; i++){
        printf("insira a nota do aluno %d: ", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }

    media = soma/20;

    for(int i = 0; i <= 19; i++){
        if(nota[i] > media){
            acimaMedia++;
        }
    }

    printf("Média da turma %.2f\n", media);
    printf("Alunos acima da média: %.f", acimaMedia);
}