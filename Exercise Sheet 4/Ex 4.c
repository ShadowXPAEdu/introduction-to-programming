#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    int n, x;
    setlocale(LC_ALL, "Portuguese");
    do {
    printf("Introduza um n�mero inteiro e outro inteiro positivo:\n");
    scanf("%d %d", &x, &n);
    } while (n < 0);

    if (n > 0) {
        printf("N�mero final (%d ^ %d): %.0lf", x, n, pow(x, n));
    } else {
        printf("Erro: O segundo n�mero n�o foi positivo ou igual a Zero!");
    }

    return 0;
}
