/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int n, int m) {
    
    int sobrevivente = 0;
    
    for (int i = 2; i <= n; i++) {
        
        sobrevivente = (sobrevivente + m) % i;
    }
    return sobrevivente;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int m = 1;

        while (1) {
            
            int sobrevivente = (josephus(n - 1, m) + 1) % n + 1;

            if (sobrevivente == 13) {
                break;
            }

            m++;
        }
        
        printf("%d\n", m);
    }

    return 0;

    
}
