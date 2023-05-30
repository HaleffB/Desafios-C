#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("Tente adivinhar o numero entre 1 e 100.\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            printf("Numero muito alto! Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            printf("Numero muito baixo! Tente novamente.\n");
        } else {
            printf("Parabens! Voce acertou o numero em %d tentativas!\n", tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}
