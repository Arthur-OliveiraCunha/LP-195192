/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 30/04/2026
Objetivo    : Tabuada.
Aprendizado : <<<Efetuar multiplicacoes progressivas com uma constante e uma variavel>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int C, i, R = 0;

    scanf("%d", &C);

    for (i = 1; i <= 10; i++) {

        R = C * i;

        printf("%d x %d = %d\n", i, C, R);
    }
    
    return 0;
}
