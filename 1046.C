/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 04/06/2026
Objetivo    : Determinar a duracao de um jogo.
Aprendizado : <<<Uso da funcao "calcularDuracao">>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int INICIO, int FIM){
    int DURACAO;
    
    if(INICIO == FIM){
        DURACAO = 24;
    }else{
        DURACAO = ( (FIM - INICIO) + 24 ) % 24;
    }
    
    return DURACAO;

}

int main() {
    int INICIO, FIM;
    
    scanf("%d", &INICIO);
    scanf("%d", &FIM);
    
    printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao(INICIO, FIM));
 
    return 0;
}
