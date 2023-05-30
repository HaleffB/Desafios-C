#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int max_palavras=16, op, sorteio, tamanho, acertos, erro, opcon;

    char nome max_palavras[15], dica, nomeu[15];

    printf("\n\t jogo de adivinhacao");

    printf("\n\t ** menu de tema **");
    printf("\n\t 1-Fruta");
    printf("\n\t 2-Comida");
    printf("\n\t 3-Profissao");
    printf("\n\t 4-Objeto");
    printf("\n\t 5-Sair");
    printf("\n\t digite a opcao: ");
    scanf("%d",&op);

    switch(op){
        case 1: {

        strcpy(nome[0],"melancia");
        strcpy(nome[1],"banana");
        strcpy(nome[2],"goiaba");
        strcpy(nome[3],"abacaxi");
        strcpy(nome[4],"uva");
        strcpy(nome[5],"laranja");
        strcpy(nome[6],"ameixa");
        strcpy(nome[7],"manga");
        strcpy(nome[8],"caju");
        strcpy(nome[9],"acerola");
        strcpy(nome[10],"mangaba");
        strcpy(nome[11],"melao");
        strcpy(nome[12],"abacate");
        strcpy(nome[13],"caranbola");
        strcpy(nome[14],"maca");
        strcpy(nome[15],"pitomba");
    do{

        sorteio = rand()%max-palavras;
        tamanho = strlen(nome[sorteio]);
        dica = (nome[sorteio][0]);
        printf("\n\t quantidade de letra da palavra: %d", tamanho);
        printf("\n\t a primeira letra: %c",dica);
        printf("\n\t 1-sim\n\t 2-nao");
        scanf("%d",&dica);
        if(dica==1){
            dica = (nome[sorteio][2]);
            printf("\n\t a terceira letra e: %c",dica);
        }
        printf("\n\t digite a palavra: ");
        getchar();
        scanf("%[a-z]s",nomeu)

        if(strcmp(nome[sorteio],nomeu)==0){
            printf("\n\t voce acertou a palavra");
            acertos++;
        }
        else{
            printf("voce erroua a palavra");
            erro++;
        }
        printf("\n\t deseja continuarno mesmo tema? ");
        printf("\n\t 1-sim\n\t 2-nao: ");
        scanf("%d", opcon);
    }while(opcon!=3);
        printf("\n\t quantidade acerto: %d",acertos);
        printf("\n\t quantidade de erros: %d",erro);
        acertos=0;
        erro=0;

            break;
        }
        case 2: {

        strcpy(nome[0],"arroz");
        strcpy(nome[1],"estrogonoff");
        strcpy(nome[2],"peixe");
        strcpy(nome[3],"coxinha");
        strcpy(nome[4],"bolo");
        strcpy(nome[5],"gelatina");
        strcpy(nome[6],"pizza");
        strcpy(nome[7],"macaxeira");
        strcpy(nome[8],"batata");
        strcpy(nome[9],"frango");
        strcpy(nome[10],"pastel");
        strcpy(nome[11],"hamburguer");
        strcpy(nome[12],"macarrao");
        strcpy(nome[13],"carne");
        strcpy(nome[14],"lazanha");
        strcpy(nome[15],"feijao");
    do{

        sorteio = rand()%max-palavras;
        tamanho = strlen(nome[sorteio]);
        dica = (nome[sorteio][0]);
        printf("\n\t quantidade de letra da palavra: %d", tamanho);
        printf("\n\t a primeira letra: %c",dica);
        printf("\n\t 1-sim\n\t 2-nao");
        scanf("%d",&dica);
        if(dica==1){
            dica = (nome[sorteio][2]);
            printf("\n\t a terceira letra e: %c",dica);
        }
        printf("\n\t digite a palavra: ");
        getchar();
        scanf("%[a-z]s",nomeu)

        if(strcmp(nome[sorteio],nomeu)==0){
            printf("\n\t voce acertou a palavra");
            acertos++;
        }
        else{
            printf("voce erroua a palavra");
            erro++;
        }
        printf("deseja continuarno mesmo tema? ");
        printf("\n\t 1-sim\n\t 2-nao: ");
        scanf("%d", opcon);
    }while(opcon!=3);
        printf("\n\t quantidade acerto: %d",acertos);
        printf("\n\t quantidade de erros: %d",erro);
        acertos=0;
        erro=0;

            break;
        }
        case 3: {

        strcpy(nome[0],"arquiteto");
        strcpy(nome[1],"dancarino");
        strcpy(nome[2],"policial");
        strcpy(nome[3],"bombeiro");
        strcpy(nome[4],"biologo");
        strcpy(nome[5],"medico");
        strcpy(nome[6],"advogado");
        strcpy(nome[7],"engenheiro");
        strcpy(nome[8],"cantor");
        strcpy(nome[9],"artista");
        strcpy(nome[10],"mecanico");
        strcpy(nome[11],"diretor");
        strcpy(nome[12],"professor");
        strcpy(nome[13],"encanador");
        strcpy(nome[14],"pedreiro");
        strcpy(nome[15],"pintor");
    do{

        sorteio = rand()%max-palavras;
        tamanho = strlen(nome[sorteio]);
        dica = (nome[sorteio][0]);
        printf("\n\t quantidade de letra da palavra: %d", tamanho);
        printf("\n\t a primeira letra: %c",dica);
        printf("\n\t 1-sim\n\t 2-nao");
        scanf("%d",&dica);
        if(dica==1){
            dica = (nome[sorteio][2]);
            printf("\n\t a terceira letra e: %c",dica);
        }
        printf("\n\t digite a palavra: ");
        getchar();
        scanf("%[a-z]s",nomeu)

        if(strcmp(nome[sorteio],nomeu)==0){
            printf("\n\t voce acertou a palavra");
            acertos++;
        }
        else{
            printf("voce erroua a palavra");
            erro++;
        }
        printf("deseja continuarno mesmo tema? ");
        printf("\n\t 1-sim\n\t 2-nao: ");
        scanf("%d", opcon);
    }while(opcon!=3);
        printf("\n\t quantidade acerto: %d",acertos);
        printf("\n\t quantidade de erros: %d",erro);
        acertos=0;
        erro=0;

            break;
        }
        case 4: {

        strcpy(nome[0],"sanitario");
        strcpy(nome[1],"armario");
        strcpy(nome[2],"geladeira");
        strcpy(nome[3],"prato");
        strcpy(nome[4],"talher");
        strcpy(nome[5],"tablet");
        strcpy(nome[6],"carregador");
        strcpy(nome[7],"relogio");
        strcpy(nome[8],"banco");
        strcpy(nome[9],"cadeira");
        strcpy(nome[10],"celular");
        strcpy(nome[11],"teclado");
        strcpy(nome[12],"computador");
        strcpy(nome[13],"copo");
        strcpy(nome[14],"boneco");
        strcpy(nome[15],"bola");
    do{

        sorteio = rand()%max-palavras;
        tamanho = strlen(nome[sorteio]);
        dica = (nome[sorteio][0]);
        printf("\n\t quantidade de letra da palavra: %d", tamanho);
        printf("\n\t a primeira letra: %c",dica);
        printf("\n\t 1-sim\n\t 2-nao");
        scanf("%d",&dica);
        if(dica==1){
            dica = (nome[sorteio][2]);
            printf("\n\t a terceira letra e: %c",dica);
        }
        printf("\n\t digite a palavra: ");
        getchar();
        scanf("%[a-z]s",nomeu)

        if(strcmp(nome[sorteio],nomeu)==0){
            printf("\n\t voce acertou a palavra");
            acertos++;
        }
        else{
            printf("voce erroua a palavra");
            erro++;
        }
        printf("deseja continuar no mesmo tema? ");
        printf("\n\t 1-sim\n\t 2-nao: ");
        scanf("%d", opcon);
    }while(opcon!=3);
        printf("\n\t quantidade acerto: %d",acertos);
        printf("\n\t quantidade de erros: %d",erro);
        acertos=0;
        erro=0;

            break;
        }
    }
while(op!=5);
printf("\n\t fim de programa");
getchar();
}
