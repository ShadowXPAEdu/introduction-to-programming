#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float ex1, ex2, ex3, me, met, mea;   // exX - teste X ||| me - m�dia de cada aluno ||| met - m�dia total ||| mea - M�dia de cada aluno Acumuladora
    int a, r, alu, i, x;                 // a - Alunos Aprovados ||| r - Alunos Reprovados ||| alu - N�mero de alunos ||| x - Aluno n�mero x
    printf("Introduza n�mero de alunos:\n");
    scanf("%d", &alu);

    mea = 0;
    a = 0;
    r = 0;
    x = 1;
    for (i = 0; i < alu; i++) {
        printf("\nIntroduza a nota do teste 1 do %d� aluno\n", x);
        scanf("%f", &ex1);
        printf("\nIntroduza a nota do teste 2 do %d� aluno\n", x);
        scanf("%f", &ex2);
        printf("\nIntroduza a nota do teste 3 do %d� aluno\n", x);
        scanf("%f", &ex3);
        me = (ex1 + ex2 + ex3) / 3;
        printf("\nM�dia: %.2f\n", me);
        mea += me;
        if (me >= 9.5f) {
            printf("\nAluno Aprovado!\n");
            a++;
        } else {
            printf("\nAluno Reprovado!\n");
            r++;
        }
        x++;
    }

    met = mea / alu;

    printf("\nM�dia Total da Turma: %.2f\nN�mero de Alunos Aprovados: %d\nN�mero de Alunos Reprovados: %d\n", met, a, r);

    return 0;
}
