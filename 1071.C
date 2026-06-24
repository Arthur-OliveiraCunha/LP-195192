/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 03/06/2026
Objetivo    : Soma de numeros impares consecutivos.
Aprendizado : <<<Repeticao de comandos alternativos e consecutivos>>>
Pergunta de segunda ordem: <<<>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int A, B, m, M, S=0, i;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A < B) {
        m = A;
        M = B;
    } else {
        m = B;
        M = A;
    }

    for (i = (m + 1); i < M; i++) {
        
        if (i % 2 != 0) {

            S += i;
        }
    } 

    printf("%d\n", S);
    
    
    return 0;


}
