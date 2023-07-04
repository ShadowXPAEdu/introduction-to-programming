#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b, c;
    printf("Introduza 3 n�meros (A, B, C):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a > b && a > c) {
        printf("\nO maior n�mero � o primeiro n�mero (A): %f\n", a);
        if (b > c) {
            printf("\nOrdem crescente (A > B > C): %f > %f > %f\n", a, b, c);
        } else {
            printf("\nOrdem crescente (A > C > B): %f > %f > %f\n", a, c, b);
        }
    } else if (b > c) {
        printf("\nO maior n�mero � o segundo n�mero (B): %f\n", b);
        if (a > c) {
            printf("\nOrdem crescente (B > A > C): %f > %f > %f\n", b, a, c);
        } else {
            printf("\nOrdem crescente (B > C > A): %f > %f > %f\n", b, c, a);
        }
    } else {
        printf("\nO maior n�mero � o terceiro n�mero (C): %f\n", c);
        if (a > b) {
            printf("\nOrdem crescente (C > A > B): %f > %f > %f\n", c, a, b);
        } else {
            printf("\nOrdem crescente (C > B > A): %f > %f > %f\n", c, b, a);
        }
    }

    return 0;
}

