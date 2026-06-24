/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    
    int H;

    while (scanf("%d", &H) == 1 && H != 0) {
        int maior = H;
        
        while (H != 1) {
           
            if (H % 2 == 0) {
                H = H / 2;
            } 
           
            else {
                H = 3 * H + 1;
            }

            
            if (H > maior) {
                maior = H;
            }
        }

        printf("%d\n", maior);
    }

    
    return 0;

    
}
