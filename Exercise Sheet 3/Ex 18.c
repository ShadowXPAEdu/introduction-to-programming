#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int age;
    do{
    printf("Introduza a idade:\n");
    scanf("%d", &age);
    } while (age <= 0);

    if (age < 18) {
        printf("N�o pode entrar. Raz�o - Idade < 18!");
    } else if (age < 60) {
        printf("Fila Comum.");
    } else {
        printf("Fila de Idoso.");
    }


    return 0;
}
