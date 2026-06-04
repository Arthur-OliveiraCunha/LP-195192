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

float calcularLitros(int Vmedia, int horas){
    int Distancia;
    float Litros;
    
    distancia = Vmedia * Horas;
    Litros = Distancia/12.0;
    
    return Litros;
    
}


int main() {
    int Horas, Vmedia;
    
    scanf("%d", &Horas);
    scanf("%d", &Vmedia);
    
    printf("%.3f\n", calcularLitros(Vmedia, horas));

    return 0;
}
