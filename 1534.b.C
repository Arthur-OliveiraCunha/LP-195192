/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Linguagem   : C
Nome        : Arthur de Oliveira Cunha
Plataforma  : https://judge.beecrowd.com/pt/problems/view/1534
Exercício   : 1534.b
Data        : 03/06/2026
Objetivo    : <<<Imprimir Matriz>>>
Aprendizado : <<<Matriz com ponteiro>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */
#include <stdio.h>
 
int main() {
    int A;
    
    while(scanf("%d", &A) != EOF){
        int M[70][70];
        
        for(int i=0; i < A; i++){
            for(int j=0; j < A;j++){
                
                if(j == A - 1 - i){
                    *( *(M+i) + j) = 2;
                }
                else if(i == j){
                    *( *(M+i) + j) = 1;
                }
                else{
                    *( *(M+i) + j) = 3;
                }
            }
        }
        for(int i=0; i < A; i++){
           
            for(int j=0; j < A; j++){
               
                printf("%d",* ( *(M+i) + j) );
            }
            printf("\n");
        }
    }
    
    return 0;
}
