/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Uso de Vetores>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int M = 0, P, i, m;

    for (i = 1; i <= 100; i++) {

        scanf("%d", &m);

        if (m > M) {

                M = m;
                P = i;
        }
    }


    printf("%d\n%d\n", M, P);
    
    return 0;


}
