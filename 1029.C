/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 24/06/2026
Objetivo    : Fibonacci.
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>

int main() {
    
    int X, N;
    
    long long fib[40];
    long long calls[40];

    fib[0] = 0; calls[0] = 0;
    fib[1] = 1; calls[1] = 0;

    for (int i = 2; i < 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        calls[i] = calls[i - 1] + calls[i - 2] + 2;
    }

    if (scanf("%d", &X) == 1) {
        
        while (X--) {
            
            scanf("%d", &N);
            
            printf("fib(%d) = %lld calls = %lld\n", N, calls[N], fib[N]);
        }
    }

    return 0;
}
