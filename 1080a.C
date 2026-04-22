/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : <<<Uso de Vetores>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int maior, posicao, i, M;
    maior = 0;
  
    for (i = 1; i <= 100; ++i){
        
      scanf("%i", &M);
      
      if(M > maior){
          maior = M;
          posicao = i;
      }
      
  }
    printf("%i\n%i\n", maior, posicao);
 
    return 0;
}
