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
 
double distancia(double *x1, double *x2, double *y1, double *y2){
    double resultado;

    resultado = sqrt( pow( (*x2-*x1), 2) + pow( (*y2-*y1), 2) );
    
    return resultado;
}


int main() {
    double x1, x2;
    double y1, y2;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    printf("%.4lf\n", distancia(&x1, &x2, &y1, &y2));

    return 0;
}



//#include <stdio.h>
#include <math.h>

int main() {

    double x1, x2, distancia;

    scanf("%lf %lf", &x1, &x2);

    distancia = abs(x1 - x2);

    printf("distancia e %lf", distancia);



    return 0;

}
