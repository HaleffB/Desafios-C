#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano, x, x1, x2, x3, x4, x5, x6, x7, x8, x9, xx1, xx2, xx3, xx4, dia, mes;

    printf("Digite o ano: ");
    scanf("%d", &ano);0

    x = ano % 19;
    x1 = ano / 100;
    x2 = ano % 100;
    x3 = x1 / 4;
    x4 = x1 % 4;
    x5 = (x1 + 8) / 25;
    x6 = (x1 - x5 + 1) / 3;
    x7 = (19 * x + x1 - x3 - x6 + 15) % 30;
    x8 = x2 / 4;
    x9 = x2 % 4;
    xx1 = (32 + 2 * x4 + 2 * x8 - x7 - xx1) % 7;
    xx2 = (x + 11 * x7 + 22 * xx2) / 451;
    xx3 = (x7 + xx2 - 7 * xx3 + 114) / 31;
    xx4 = (x7 + xx2 - 7 * xx3 + 114) % 31;

    dia = p + 1;
    mes = n;

    printf("Pascoa: %d de ", dia);
    switch (mes) {
        case 3:
            printf("marco");
            break;
        case 4:
            printf("abril");
            break;
    }
    printf(" de %d", ano);

    return 0;
}
