#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num;
    setlocale(LC_ALL, "Portuguese");

    do {
        printf("Introduza um n�mero (Diferente de zero):\n");
        scanf("%d", &num);
        if (num != 0) {
            printf("\nO quadrado do n�mero �: %d\n", num*num);
        } else {
        }
    } while (num != 0);

    return 0;
}
