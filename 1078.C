/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 30/04/2026
Objetivo    : Tabuada.
Aprendizado : <<<Efetuar multiplicacoes progressivas com uma constante e uma variavel>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
    int N, i, AUX;
    
    scanf("%d", &N);
    
    for(i<=10; i=10; i++);
    {
       AUX=N*i;
       
       printf("%d x %d = %d/N", i, N, AUX);
    }
 
    return 0;
}
