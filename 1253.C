/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 03/06/2026
Objetivo    : Cifra de Cesar.
Aprendizado : <<<Transferir letras de posicao no alfabeto>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>

int main() {
    
    int N, D;
    char T[100];

    if (scanf("%d", &N) == 1) {
        
        while (N--) {
            
            scanf("%s", T);
           
            scanf("%d", &D);

            int t = strlen(T);

            
            for (int i = 0; i < t; i++) {
                
                char n = T[i] - D;

                
                if (n < 'A') {
                    n = n + 26;
                }

                
                T[i] = n;
            }

            printf("%s\n", T);
        }
    }

    return 0;
}
