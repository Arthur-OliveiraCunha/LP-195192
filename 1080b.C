/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080.b
Data        : 21/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Uso de Vetores>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int vetor[100];
    int maior, p = 1;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 1; i < 100; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            p = i + 1;
        }
    }

    printf("%d\n%d\n", maior, p);

    return 0;
}
