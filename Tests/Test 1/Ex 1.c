#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, cont = 0;
    float m = 0, a = 0;

    do {
    printf("\nIntroduza um n�mero:\n");
    scanf("%d", &n);
    if (n > 0) {
        a += n;
        cont++;
    }
    } while (n > 0);

    if (cont != 0) {
        m = a/cont;
        printf("\nA m�dia dos n�meros �: %.2f\n", m);
    } else {}


    return 0;
}
