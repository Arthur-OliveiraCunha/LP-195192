/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 04/06/2026
Objetivo    : Determinar a duracao de um jogo.
Aprendizado : <<<Uso da funcao "funcao recursiva">>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int Duracao(int S, int E) {

    int D;

    if (S == E) {
        D = 24;
        
    } else {

        D = ((E - S) + 24) % 24;
    }

    return D;
    
}

int main () {

    int S, E, D;

    scanf("%d", &S);
    scanf("%d", &E);

    D = ((E - S) + 24);

    printf("O JOGO DUROU %d HORA(S)\n", Duracao(S, E));

    return 0;
}
//codigo maldito, beecrowd seu odio por mim e reciproco.
