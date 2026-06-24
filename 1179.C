/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 04/06/2026
Objetivo    : Preencher um vetor.
Aprendizado : <<<Separar variaveis por tipo>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
 
int main() {

    
    int P[5], I[5], CP = 0, CI = 0, i, N, j;

    for (i = 0; i < 15; i++) {

        scanf("%d", &N);

        if (N % 2 == 0) {
            P[CP] = N;
            CP++;
            
            if (CP == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, P[j]); 
                } 
                CP = 0;
            }
        } 
        else { 
            I[CI] = N;
            CI++;
            
            
            if (CI == 5) {
                for (j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, I[j]); 
                } 
                CI = 0;
            }
        } 
    }
    
    
    for (int j = 0; j < CI; j++) {
        printf("impar[%d] = %d\n", j, I[j]);
    }
 
    for (int j = 0; j < CP; j++) {
        printf("par[%d] = %d\n", j, P[j]);
    }

    return 0;
}


