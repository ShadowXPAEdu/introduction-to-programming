#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num, i, x = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Introduza um n�mero positivo:\n");
    scanf("%d", &num);

    if (num > 0){
        for (i = 0; i <= num; i++) {
            x += i;
        }
        printf("\nN�mero: %d", x);
    } else {
        printf("\nN�mero negativo ou neutro!");
    }

    return 0;
}
