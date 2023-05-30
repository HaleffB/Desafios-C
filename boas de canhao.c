#include <stdio.h>

int main() {
    int n;
    printf("Digite o numero de bolas: "); //Mensagem inicial para o usu�rio.
    scanf("%d", &n);

    int nTotal = 0;
    int nCamadaAtual = n;
    int camadas = 1;
    while (nCamadaAtual >= 1) {
        nTotal += nCamadaAtual * camadas; //Soma de bolas por cada camada.
        nCamadaAtual--;
        camadas++;
    }

    printf("O numero total de bolas na piramide e: %d\n", nTotal); //Mensagem final para o usu�rio.
    return 0;
}
