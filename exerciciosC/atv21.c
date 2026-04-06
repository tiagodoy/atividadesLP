#include <stdio.h>

int main() {

    int hi, hf, d;
    printf("Digite a hora de início do jogo ");
    scanf("%i", &hi);
    printf("Digite a hora de fim do jogo ");
    scanf("%i", &hf);
    if(hi == hf){
        d = 24;
    }else if(hf>hi){
        d = hf - hi;
    }else if(hi>hf){
        d = (24-hi)+hf;
    }

    printf("A duração total do jogo foi de %i horas", d);

    return 0;
}