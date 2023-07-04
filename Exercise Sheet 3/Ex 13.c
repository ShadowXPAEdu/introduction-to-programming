#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void seentao();
void switchcase();

int main() {
    setlocale(LC_ALL, "Portuguese");


    switchcase();
    //seentao();


    return 0;
}

void seentao() {
    int mes;
    printf("Introduza o n�mero do m�s:\n");
    scanf("%d", &mes);

    if (mes == 1) {
        printf("\nO m�s de Janeiro tem 31 dias.\n");
    } else if (mes == 2) {
        printf("\nO m�s de Fevereiro tem 28 dias. (29 dias se for um ano bissexto!)\n");
    } else if (mes == 3) {
        printf("\nO m�s de Mar�o tem 31 dias.\n");
    } else if (mes == 4) {
        printf("\nO m�s de Abril tem 30 dias.\n");
    } else if (mes == 5) {
        printf("\nO m�s de Maio tem 31 dias.\n");
    } else if (mes == 6) {
        printf("\nO m�s de Junho tem 30 dias.\n");
    } else if (mes == 7) {
        printf("\nO m�s de Julho tem 31 dias.\n");
    } else if (mes == 8) {
        printf("\nO m�s de Agosto tem 31 dias.\n");
    } else if (mes == 9) {
        printf("\nO m�s de Setembro tem 30 dias.\n");
    } else if (mes == 10) {
        printf("\nO m�s de Outubro tem 31 dias.\n");
    } else if (mes == 11) {
        printf("\nO m�s de Novembro tem 30 dias.\n");
    } else if (mes == 12) {
        printf("\nO m�s de Dezembro tem 31 dias.\n");
    } else {
        printf("\nO m�s com o n�mero %d n�o existe.\n", mes);
    }
}

void switchcase() {
    int mes;
    printf("Introduza o n�mero do m�s:\n");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
            printf("\nO m�s de Janeiro tem 31 dias.\n");
            break;
        case 2:
            printf("\nO m�s de Fevereiro tem 28 dias. (29 dias se for um ano bissexto!)\n");
            break;
        case 3:
            printf("\nO m�s de Mar�o tem 31 dias.\n");
            break;
        case 4:
            printf("\nO m�s de Abril tem 30 dias.\n");
            break;
        case 5:
            printf("\nO m�s de Maio tem 31 dias.\n");
            break;
        case 6:
            printf("\nO m�s de Junho tem 30 dias.\n");
            break;
        case 7:
            printf("\nO m�s de Julho tem 31 dias.\n");
            break;
        case 8:
            printf("\nO m�s de Agosto tem 31 dias.\n");
            break;
        case 9:
            printf("\nO m�s de Setembro tem 30 dias.\n");
            break;
        case 10:
            printf("\nO m�s de Outubro tem 31 dias.\n");
            break;
        case 11:
            printf("\nO m�s de Novembro tem 30 dias.\n");
            break;
        case 12:
            printf("\nO m�s de Dezembro tem 31 dias.\n");
            break;
        default:
            printf("\nO m�s com o n�mero %d n�o existe.\n", mes);
    }
}
