#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char csdv;

    do {
    printf("\nIntroduza o seu estado civil (Letra mai�scula):\nC- Casado(a)\nS- Solteiro(a)\nD- Divorciado(a)\nV- Vi�vo(a)\n");
    scanf("%c", &csdv);
    getchar();

    switch (csdv) {
        case 'C':
            printf("\nEstado civil: Casado(a).\n");
            break;
        case 'S':
            printf("\nEstado civil: Solteiro(a).\n");
            break;
        case 'D':
            printf("\nEstado civil: Divorciado(a).\n");
            break;
        case 'V':
            printf("\nEstado civil: Vi�vo(a).\n");
            break;
        default:
            printf("\nEstado civil inv�lido!\n");
    }
    } while (csdv != 'C' && csdv != 'S' && csdv != 'D' && csdv != 'V');

    return 0;
}
