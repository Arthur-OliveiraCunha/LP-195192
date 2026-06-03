/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 03/06/2026
Objetivo    : Soma de numeros impares consecutivos.
Aprendizado : <<<Repeticao de comandos alternativos e consecutivos>>>
Pergunta de segunda ordem: <<<>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    int soma = 0;
    if(A <= B){
        for(int i = A+1; i < B; i++){
            if(i%2){
                soma = soma + i;
            }
        }
    }else{
        for(int i = B+1; i < A; i++){
            if(i%2){
                soma = soma + i;
            }
        }
    }
    printf("%d\n", soma);
}
