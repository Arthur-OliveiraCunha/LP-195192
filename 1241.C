#include <stdio.h>
#include <string.h>
/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 06/05/2026
Objetivo    : Determinar se dois vetores tem numeros finais identicos
Aprendizado : <<<Comparar vetores>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char A[1005], B[1005];

    if (scanf("%d", &N) == 1) {
        
        while (N--) {
            scanf("%s %s", A, B);

            int tam_A = strlen(A);
            int tam_B = strlen(B);

            if (tam_B > tam_A) {
                printf("nao encaixa\n");
            } 
            else {

                if (strcmp(&A[tam_A - tam_B], B) == 0) {
                    printf("encaixa\n");
                } else {
                    printf("nao encaixa\n");
                }
            }
        }
    }

    return 0;
}
