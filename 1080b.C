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
 
    int V[100], i, M, P=1;

    for (i=0; i<100; i++) {

        scanf("%d", &V[i]);
        
    }

    M = V[0];

    for (i = 1; i < 100; i++) {
        
        if (V[i] > M) {

        M = V[i];
        P = i + 1;

        }
        
    }

    printf("%d\n%d\n", M, P);
    
    return 0;


}
