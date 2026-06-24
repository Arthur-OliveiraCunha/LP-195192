/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 03/06/2026
Objetivo    : Sentenca dancante.
Aprendizado : <<<Alterar caixa alta/baixa em uma sentenca>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {

    int i = 0; 
    char F[100];

    
    while (fgets(F, sizeof(F), stdin) != NULL) {
        
        int tam = strlen(F); 
        int M = 1;

        for (i = 0; i < tam; i++) {
            
            if (F[i] == ' ' || F[i] == '\n') {
                continue; 
            }

            if (M == 1) {
                F[i] = toupper(F[i]);
                M = 0; 
                
            } else {
                
                F[i] = tolower(F[i]);
                
                M = 1; 
            }
        }

        
        printf("%s", F);
        
    }
    

    return 0;

    
}



