#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    do {
    printf("Introduza um n�mero:\n");
    scanf("%d",&x);
    } while (x < 0);

    y = sqrt(x);

    if(y*y == x) {
        printf("\nO n�mero %d � um quadrado perfeito.\nResultado: %.0lf\n", x, sqrt(x));
    } else {
        printf("\nO n�mero %d n�o � um quadrado perfeito.\nResultado: %.16lf\n", x, sqrt(x));
    }

    return 0;
}
