#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Introduza um n�mero:\n");
    scanf("%d", &n);

    if (n%2 == 0) {
        printf("\nO n�mero � par.\n");
    } else {
        printf("\nO n�mero � �mpar.\n");
    }

    return 0;
}
