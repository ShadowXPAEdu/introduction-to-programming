#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x, y, z;

    printf("Introduza o primeiro n�mero:\n");
    scanf("%f", &x);
    printf("Introduza o segundo n�mero:\n");
    scanf("%f", &y);

    z = x + y;

    if (z > 20.0f) {
        z+= 8;
    } else {
        z-= 5;
    }

    printf("O n�mero �: %.2f\n", z);

    return 0;
}
