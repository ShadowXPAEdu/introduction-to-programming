#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, n;
    printf("Introduza um n�mero:\n");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n%i == 0) {
            printf("\n%d � um divisor do n�mero %d\n", i, n);
        } else {
        }
    }

    return 0;
}
