/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    int N;
    
    if (scanf("%d", &N) == 1) {
        
        int X[N]; 

        for (int i = 0; i < N; i++) {
            scanf("%d", &X[i]);
        }

        int menor = X[0], posicao = 0;

        for (int i = 1; i < N; i++) {
            if (X[i] < menor) {
                menor = X[i];
                posicao = i;
            }
        }

        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", posicao);\
        
    }

    return 0;
    
}
