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
    } else if (b > c) {
        printf("\nO maior n�mero � o segundo n�mero (B): %f\n", b);
    } else {
        printf("\nO maior n�mero � o terceiro n�mero (C): %f\n", c);
    }

    return 0;
}
