/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur de Oliveira Cunha
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1024
Exercício   : 1024
Data        : 03/06/2026
Objetivo    : <<<Criptografar uma mensagem>>>
Aprendizado : <<<Inversao e troca de variaveis>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    char V[1001];
    int A;
    int tamanho = strlen(V);
    char AUX;
    
    scanf("%d", &A);
    getchar();
    
    for(int i = 0; i < A; i++){
        
        fgets(V, 1001, stdin);
        V[strcspn(V,"\n")] = '\0';

        for(int j = 0; V[j] != '\0' ; j++){
            if((V[j] >= 'B' && V[j] <= 'Z') || (V[j] >= 'b' && V[j] <= 'z')){
            V[j] += 3;
            }
        }

        int tamanho = strlen(V);
        char AUX;

        for(int q = 0; q < tamanho/2; q++){
            AUX = V[q];
            V[q] = V[tamanho -1 -q];
            V[tamanho -1 -q] = AUX;
        }

        for(int o = tamanho / 2; V[o] != '\0'; o++){
                V[o] -= 1;
            }

        printf("%s\n", V);

    }

    return 0;
}
