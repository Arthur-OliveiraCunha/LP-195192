/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur de Oliveira Cunha
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1024
Exercício   : 1024
Data        : 03/06/2026
Objetivo    : <<<Criptografar uma mensagem>>>
Aprendizado : <<<Inversao e troca de variaveis>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void codigo () {

    char code[1000];

    fgets(code, 1000, stdin);

    int t = strlen(code);

    if (code[t-1] == '\n') {
        code[t-1] = '\0';
        t--;
    }

    for (int i; i < t; i++) {
        if (isalpha(code[i])) {
            code[i] = code[i] + 3;
        }
    }


    for (int i = 0; i < (t/2); i++) {
        char vt = code[i];
        code[i] = code[t - 1 - i];
        code[t - 1 - i] = vt;
    }


    int metade = t/2;

    for (int i = metade; i < t; i++) {
        code[i] = code[i] - 1;
    }

    printf("%s\n", code);

}


int main () {

    int n;

    if (scanf("%d", &n) == 1) {
        getchar();
        while (n--) {

            codigo();
        }
        
    }

    return 0;

}
