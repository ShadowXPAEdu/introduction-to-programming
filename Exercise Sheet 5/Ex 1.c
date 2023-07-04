#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void sppi(int *x, int *y);  // ISTO � UM PROT�TIPO

int main() {
    setlocale(LC_ALL, "Portuguese");
    int s = 0, p = 0;  // num - N�mero introduzido s - Soma de pares p - Produto de �mpares

    sppi(&s, &p);

    printf("Soma de n�meros pares: %d\nProduto de n�meros �mpares: %d", s, p);

    return 0;
}

void sppi(int *x, int *y) {
    int num;

    printf("Introduza um n�mero:\n");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 2 == 0) { // Par
            (*x) += num;
        } else {            // �mpar
            if (*y == 0) {
                *y = 1;
            } else {}
            (*y) *= num;
        }
        printf("Introduza um n�mero:\n");
        scanf("%d", &num);
    }

}
