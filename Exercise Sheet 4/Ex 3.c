#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza um n�mero positivo:\n");
    scanf("%d", &num);

    if (num > 0) {
        for (i = 0; i <= num*2; i++) {
           if (i % 2 != 0) {
                printf("N�meros �mpar: %d\n", i);
            } else {}
        }
    } else {
        printf("\nErro: N�mero negativo ou Zero (n�o h� numeros �mpares)\n");
    }

    return 0;
}
