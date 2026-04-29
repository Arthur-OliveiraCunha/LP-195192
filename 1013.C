/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 29/04/2026
Objetivo    : Descobrir o maior entre tres valores
Aprendizado : <<<Manusear variaveis em contas internas do codigo>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int A, B, C, MAIOR=0,AUX=0;
	
	scanf("%d %d %d", &A, &B, &C);

	AUX= (A+B)+abs(A-B)/2;

	      MAIOR= (AUX+C)+abs(AUX-C)/2;

	              printf("%d eh maior", MAIOR);


	return 0;
}
