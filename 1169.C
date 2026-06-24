/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int N, X;

    if (scanf("%d", &N) == 1) {
        while (N--) {
            scanf("%d", &X);

            unsigned long long graos;

            if (X == 64) {
                graos = -1; 
            } else {
                graos = (1ULL << X) - 1; 
            }
            
            unsigned long long kg = (graos / 12) / 1000;
            
            printf("%llu kg\n", kg);
        }
    }

    return 0;
}
