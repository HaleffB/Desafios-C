#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int pc, usuario;
    srand(time(NULL));
    pc = (rand() % 2) + 1;
    printf("Escolha sua jogada\n1.Pedra\n2.Papel\n3.Tesoura\n");
    scanf("%i", &usuario);

    if( pc == 1 && usuario == 2){
        printf("Voce ganhou o computador escolheu pedra!");

    }else if(pc == 1 && usuario == 3){
        printf("Voce perdeu o computador escolheu pedra!");

    }else if(pc == 2 && usuario == 1){
        printf("Voce perdeu o computador escolheu papel!");

    }else if(pc == 2 && usuario == 3){
        printf("Voce ganhou o computador escolheu papel!");

    }else if(pc == 3 && usuario == 1){
        printf("Voce ganhou o computador escolheu tesoura!");

    }else if(pc == 3 && usuario ==2){
        printf("Voce perdeu o computador escolheu tesoura");

    }else if (pc == usuario){
        printf("Empate, o computador escolheu %i", pc);





    }else {
    printf("Escolha inv�lida!");
        }
}
