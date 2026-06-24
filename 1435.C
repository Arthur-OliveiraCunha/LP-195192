/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    int N;

    while (scanf("%d", &N) == 1 && N != 0) {
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                
                int min = i;
                if (j < min) min = j;
                if (N - 1 - i < min) min = N - 1 - i;
                if (N - 1 - j < min) min = N - 1 - j;

                int valor = min + 1;

                if (j == 0) {
                    printf("%3d", valor); 
                } else {
                    printf(" %3d", valor); 
                }
            }
        
            printf("\n");
        }
       
        printf("\n");
    }

    return 0;
}
