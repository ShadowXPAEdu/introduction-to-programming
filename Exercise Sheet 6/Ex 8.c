#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NOTAS 3                                                                             // MUDAR N�MERO DE TESTES
#define ALU 100                                                                             // MAX N�MERO DE ALUNOS
#define CEM 122                                                                             // MAX N�MERO DE CARATERES PARA NOMES
#define N 55

void pnnaen(char x[][CEM], float y[][NOTAS], int *z);                                       // PEDIR NOME, N�MERO DE ALUNOS E NOTAS
void calc(int x, float a1[][NOTAS], float a2[], float *m, int *a, int *r);                  // FAZER CALCULOS
void printfinal(int x, char y[][CEM], float z[][NOTAS], float w[], float m, int a, int r);  // PRINT FINAL
void pr(int n);                                                                             // PRINT "---"

int main() {
    setlocale(LC_ALL, "Portuguese");
    float aen[ALU][NOTAS], me[ALU] = {0}, met = 0;                                          // aen - Alunos e Notas || me - M�dia de cada Aluno || met - M�dia total da Turma
    char nome[ALU][CEM];                                                                    // nome - Nome de cada Aluno
    int n, ap = 0, rp = 0;                                                                  // n - N�mero de Alunos || ap - Aprovado || rp - Reprovado

    pnnaen(nome, aen, &n);                                                                  // Guarda nomes de cada aluno || Valores das Notas de cada teste || e N�mero de Alunos na turma
    calc(n, aen, me, &met, &ap, &rp);                                                       // Calcula m�dia de cada aluno e m�dia da turma consoante o n�mero de alunos
    printfinal(n, nome, aen, me, met, ap, rp);                                              // Faz print de todos os valores

    return 0;
}

void pnnaen(char x[][CEM], float y[][NOTAS], int *z) {
    int i, j;

    printf("\tIntroduza o n�mero de alunos:\n\t> ");
    scanf("%d", &(*z));
    getchar();
    for (i = 0; i < (*z); i++) {
        printf("\n\tIntroduza o nome do(a) %d�(�) aluno(a):\n\t> ", i+1);
        gets(x[i]);
        for (j = 0; j < NOTAS; j++) {
            do {
                printf("\n\tIntroduza a %d� nota do(a) aluno(a): ", j+1, x[i]);
                puts(x[i]);
                printf("\t> ");
                scanf("%f", &y[i][j]);
            } while (y[i][j] < 0 || y[i][j] > 20);
        }
        getchar();
    }
}

void calc(int x, float a1[][NOTAS], float a2[], float *m, int *a, int *r) {
    int i, j;

    for (i = 0; i < x; i++) {
        for (j = 0; j < NOTAS; j++) {
            (a2[i]) += (a1[i][j]);                                                          // Acumula as notas de cada teste
        }
        (a2[i]) /= NOTAS;                                                                   // Faz m�dia das notas acumuladas
        (*m) += (a2[i]);                                                                    // Acumula as m�dias das notas acumuladas
        if (a2[i] >= 9.5f) {                                                                // Contador - Aprovado
            (*a)++;
        } else {                                                                            // Contador - Reprovado
            (*r)++;
        }
    }
    (*m) /= x;                                                                              // Faz m�dia das m�dias das notas acumuladas
}

void printfinal(int x, char y[][CEM], float z[][NOTAS], float w[], float m, int a, int r) {
    int i, j;

    system("CLS");
    pr(N);
    for (i = 0; i < x; i++) {
        printf("\n\tNome: ");
        puts(y[i]);
        printf("\n\tNotas:\n\n");
        for (j = 0; j < NOTAS; j++) {
            printf("\t%d� Exame: %.2f", j+1, (z[i][j]));
            if (z[i][j] >= 9.5f) {
                printf("\t\tExame Aprovado!\n");
            } else {
                printf("\t\tExame Reprovado!\n");
            }
        }
        printf("\n\tM�dia: %.2f\n", (w[i]));
        if (w[i] >= 9.5f) {
            printf("\n\tAluno(a) Aprovado(a)!\n");
        } else {
            printf("\n\tAluno(a) Reprovado(a)!\n");
        }
        pr(N);
    }
    printf("\n\tM�dia da turma: %.2f\n", m);
    printf("\n\tN�mero de Alunos Aprovados: %d\n", a);
    printf("\n\tN�mero de Alunos Reprovados: %d\n\n\n\n", r);
    system("PAUSE");
}

void pr(int n) {
    int i;

    for (i = 0; i < n; i++) {
        putchar('-');
    }
}
