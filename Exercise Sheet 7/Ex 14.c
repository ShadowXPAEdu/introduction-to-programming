#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define N 100

void pedir(int *x, int *n);
void calc(int *x, int n, int *M, int *m, int *p, int *neg, float *a, float *me);
void printfinal(int *x, int n, int M, int m, int p, int neg, float a, float me);

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x[N], num, maior, menor, pos = 0, neg = 0;
    float media, a = 0;

    pedir(x, &num);
    calc(x, num, &maior, &menor, &pos, &neg, &a, &media);
    printfinal(x, num, maior, menor, pos, neg, a, media);

    return 0;
}

void pedir(int *x, int *n) {
    int i;

    do {
        printf("Introduza o n�mero de valores que pretende introduzir:\n > ");
        scanf("%d", &(*n));
    } while ((*n) < 1 || (*n) > N);

    for(i = 0; i < (*n); i++) {
        printf("Introduza o %d� n�mero:\n > ", i+1);
        scanf("%d", &x[i]);
    }
}

void calc(int *x, int n, int *M, int *m, int *p, int *neg, float *a, float *me) {
    int i;
    (*M) = x[0];
    (*m) = x[0];

    for(i = 0; i < n; i++) {
        (*a) += x[i];
        if (x[i] >= 0) {
            (*p)++;
        } else {
            (*neg)++;
        }

        if ((*M) < x[i]) {
            (*M) = x[i];
        } else {}

        if ((*m) > x[i]) {
            (*m) = x[i];
        } else {}
    }

    (*me) = (*a) / n;
}

void printfinal(int *x, int n, int M, int m, int p, int neg, float a, float me) {
    int i;

    printf("\n\nArray: ");
    for(i = 0; i < n; i++){
        printf("%d ", x[i]);
    }
    printf("\nN�mero de numeros introduzidos: %d\nMaior n�mero: %d\nMenor n�mero: %d\nN�mero de n�meros positivos: %d\nN�mero de n�meros negativos: %d\nSoma de todos o n�meros: %.0f\nM�dia: %.2f\n\n\n\n", n, M, m, p, neg, a, me);
}
