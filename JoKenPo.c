#include<stdio.h>
#include<stdlib.h>

int main(){
    int jogador, computador;
    printf("_____JoKenPo_____\n\n");
    printf("1 - PEDRA\n");
    printf("2 - PAPEL\n");
    printf("3 - TESOURA\n");
    do{
    printf("Digite a opcao desejada: ");
    scanf("%d",&jogador);
    if (jogador <1 || jogador >3){
        printf("\nNumero invalido.\n\n");
    }
    }while (jogador <1 || jogador >3);

    return jogador;

    if (jogador == 1){
        printf("\nVoce escolheu PEDRA\n\n");
    }
    else (jogador == 2){
        printf("\nVoce escolheu PAPEL\n\n");
    }








}
