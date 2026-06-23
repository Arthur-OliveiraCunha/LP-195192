/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 04/06/2026
Objetivo    : Determinar a quantidade de litros em um problema.
Aprendizado : <<<Uso de Float>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {

    int Horas, Velocidade, Distancia;
    float Litros;

    scanf("%d\n", &Horas);
    scanf("%d\n", &Velocidade);

    Distancia = Velocidade * Horas;
    
    Litros = Distancia/12.0;

    printf("%.3f\n", Litros);

    return 0;

    
}
