#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float sal, em, sal03, empr;
    int pr;
    printf("Introduza sal�rio:\n");
    scanf("%f", &sal);
    sal03 = sal*0.3;
    printf("Introduza empr�stimo:\n");
    scanf("%f", &em);
    printf("Introduza n�mero de presta��es:\n");
    scanf("%d", &pr);
    empr = em / pr;

    if (sal <= 0 || em <= 0 || pr <= 0) {
        printf("\nErro: Um dos dados introduzidos est� inv�lido!\n");
    } else if (empr <= sal03) {
        printf("\nO empr�stimo pode ser concedido.");
    } else {
        printf("\nO empr�stimo n�o pode ser concedido.");
    }

    return 0;
}
