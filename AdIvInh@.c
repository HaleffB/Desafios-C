#include <stdio.h>
#include <string.h>

#define NUM_PALAVRAS 5
#define MAX_TENTATIVAS 2
#define MAX_PALAVRA 50
#define MAX_DICA 100

void jogarJogoDePalavras(char palavras[][MAX_PALAVRA], char dicas[][MAX_DICA], int temaSelecionado);

int main() {
    char palavras[NUM_PALAVRAS][MAX_PALAVRA] = {
        "gato",
        "cachorro",
        "elefante",
        "leao",
        "tigre"
    };

    char dicas[NUM_PALAVRAS][MAX_DICA] = {
        "Um animal que mia.",
        "O melhor amigo do homem.",
        "Um animal gigante com tromba.",
        "O rei da selva.",
        "Um felino listrado e feroz."
    };

    int temaSelecionado;

    printf("Bem-vindo ao jogo de palavras!\n");
    printf("Escolha um tema:\n");
    printf("1. Animais\n");
    printf("2. Frutas\n");
    printf("3. Países\n");
    printf("Digite o número do tema desejado: ");
    scanf("%d", &temaSelecionado);

    jogarJogoDePalavras(palavras, dicas, temaSelecionado);

    return 0;
}

void jogarJogoDePalavras(char palavras[][MAX_PALAVRA], char dicas[][MAX_DICA], int temaSelecionado) {
    int tentativas = 0;
    int palavrasAcertadas = 0;
    int palavraAtual = 0;
    int maxPalavras = NUM_PALAVRAS;

    if (temaSelecionado < 1 || temaSelecionado > 3) {
        printf("Tema inválido. Saindo do jogo.\n");
        return;
    }

    printf("\n--- JOGO DE PALAVRAS ---\n");

    while (palavrasAcertadas < maxPalavras) {
        printf("\nDica: %s\n", dicas[palavraAtual]);
        printf("Tentativa %d de %d\n", tentativas + 1, MAX_TENTATIVAS);
        printf("Digite a palavra: ");

        char resposta[MAX_PALAVRA];
        scanf("%s", resposta);

        if (strcmp(resposta, palavras[palavraAtual]) == 0) {
            printf("Parabéns! Você acertou a palavra!\n");
            palavrasAcertadas++;
            tentativas = 0;
            palavraAtual++;

            if (palavraAtual == maxPalavras) {
                printf("Parabéns! Você acertou todas as palavras!\n");
                break;
            }
        } else {
            printf("Resposta incorreta!\n");

            tentativas++;
            if (tentativas == MAX_TENTATIVAS) {
                printf("Você excedeu o número máximo de tentativas para esta palavra.\n");
                printf("A resposta correta era: %s\n", palavras[palavraAtual]);
                tentativas = 0;
                palavraAtual++;

                if (palavraAtual == maxPalavras) {
                    printf("Fim do jogo. Você acertou %d palavra(s).\n", palavrasAcertadas);
                    break;
                }
            }
        }
    }
}
