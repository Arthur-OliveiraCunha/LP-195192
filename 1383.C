/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    int n;
    
    if (scanf("%d", &n) == 1) {
        
        for (int instancia = 1; instancia <= n; instancia++) {
            int grade[9][9];
            int valido = 1; 
            
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    scanf("%d", &grade[i][j]);
                }
            }

            for (int i = 0; i < 9 && valido; i++) {
                int marcacao[10] = {0};
                for (int j = 0; j < 9; j++) {
                    int num = grade[i][j];
                    if (marcacao[num] == 1) { valido = 0; break; }
                    marcacao[num] = 1;
                }
            }

            for (int j = 0; j < 9 && valido; j++) {
                int marcacao[10] = {0};
                for (int i = 0; i < 9; i++) {
                    int num = grade[i][j];
                    if (marcacao[num] == 1) { valido = 0; break; }
                    marcacao[num] = 1;
                }
            }

            for (int l_bloco = 0; l_bloco < 9 && valido; l_bloco += 3) {
                for (int c_bloco = 0; c_bloco < 9 && valido; c_bloco += 3) {
                    int marcacao[10] = {0};
                    
                    for (int i = 0; i < 3 && valido; i++) {
                        for (int j = 0; j < 3; j++) {
                            int num = grade[l_bloco + i][c_bloco + j];
                            if (marcacao[num] == 1) { valido = 0; break; }
                            marcacao[num] = 1;
                        }
                    }
                }
            }

            printf("Instancia %d\n", instancia);
            if (valido) {
                printf("SIM\n\n");
            } else {
                printf("NAO\n\n");
            }
        }
    }

    
    return 0;

    
}
