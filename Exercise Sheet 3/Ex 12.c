#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza o n�mero do m�s:\n");
    scanf("%d", &num);

    switch(num) {
        case 1:
            printf("%d curresponde ao m�s de Janeiro", num);
            break;
        case 2:
            printf("%d curresponde ao m�s de Fevereiro", num);
            break;
        case 3:
            printf("%d curresponde ao m�s de Mar�o", num);
            break;
        case 4:
            printf("%d curresponde ao m�s de Abril", num);
            break;
        case 5:
            printf("%d curresponde ao m�s de Maio", num);
            break;
        case 6:
            printf("%d curresponde ao m�s de Junho", num);
            break;
        case 7:
            printf("%d curresponde ao m�s de Julho", num);
            break;
        case 8:
            printf("%d curresponde ao m�s de Agosto", num);
            break;
        case 9:
            printf("%d curresponde ao m�s de Setembro", num);
            break;
        case 10:
            printf("%d curresponde ao m�s de Outubro", num);
            break;
        case 11:
            printf("%d curresponde ao m�s de Novembro", num);
            break;
        case 12:
            printf("%d curresponde ao m�s de Dezembro", num);
            break;
        default:
            printf("Erro: O n�mero n�o curresponde a um m�s");
    }

    return 0;
}
