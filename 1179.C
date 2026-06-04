/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 04/06/2026
Objetivo    : Preencher um vetor.
Aprendizado : <<<Separar variaveis por tipo>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
 
int main() {
    int P[5];
    int I[5];
    int N, qtdP = 0, qtdI = 0;
    
    for(int i = 0; i < 15; i++){

        scanf("%d", &N);
        
        if(N % 2 == 0){

            P[qtdP] = N;
            qtdP++;
            if(qtdP == 5){

                for(int q = 0; q < 5; q++){
                    printf("P[%d] = %d\n", q, P[q]);
                }
                qtdP = 0;
            }
            
        }else{

            I[qtdI] = N;
            qtdI++;
            if(qtdI == 5){

                for(int w = 0; w < 5; w++){

                    printf("I[%d] = %d\n", w, I[w]);
                }
                qtdI = 0;
            }
        }
    }
    if(qtdI > 0){

        for(int a = 0; a < qtdI; a++){

            printf("I[%d] = %d\n", a, I[a]);
        }
    }
    
    if(qtdP > 0){

        for(int j = 0; j < qtdP; j++){

            printf("P[%d] = %d\n", j, P[j]);
        }
    }
 
    return 0;
}
