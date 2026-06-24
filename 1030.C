/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
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
    int NC, n, m;

    if (scanf("%d", &NC) == 1) {
       
        for (int caso = 1; caso <= NC; caso++) {
            scanf("%d %d", &n, &m);
            
            int resultado = josephus(n, m) + 1;
            
            printf("Case %d: %d\n", caso, resultado);
        }
    }

    return 0;
}
