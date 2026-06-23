/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 04/06/2026
Objetivo    : Determinar a distancia entre dois pontos.
Aprendizado : <<<Uso de Double>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    scanf("%lf %lf\n", &x1, &y1);
    
    scanf("%lf %lf\n", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
