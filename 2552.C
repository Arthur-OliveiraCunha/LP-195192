/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    int N, M;
    int tabuleiro[105][105];

    while (scanf("%d %d", &N, &M) != EOF) {
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &tabuleiro[i][j]);
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                
                if (tabuleiro[i][j] == 1) {
                    printf("9");
                    
                } else {
                    int paezinhos = 0;
                    
                    if (i > 0 && tabuleiro[i - 1][j] == 1) paezinhos++;
                    
                    if (i < N - 1 && tabuleiro[i + 1][j] == 1) paezinhos++;
                    
                    if (j > 0 && tabuleiro[i][j - 1] == 1) paezinhos++;
            
                    if (j < M - 1 && tabuleiro[i][j + 1] == 1) paezinhos++;

                    printf("%d", paezinhos);
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}
