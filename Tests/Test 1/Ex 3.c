#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i, cont = 0;

    do {
        printf("Introduza um n�mero positivo:\n");
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++) {
        if (n%i == 0) {
            cont++;
        } else {}
    }

    if (cont == 2 || n == 1) {
        printf("O n�mero � primo.");
    } else {
        printf("O n�mero n�o � primo.");
    }

    return 0;
}
