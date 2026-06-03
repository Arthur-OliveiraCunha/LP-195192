/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 03/06/2026
Objetivo    : Cifra de Cesar.
Aprendizado : <<<Transferir letras de posicao no alfabeto>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <string.h>

int main()
{
    int i, A, B, C, D;

    scanf("%d", &D); 
    char str[51];
    char converted_str;
    for (i = 0; i < D; i++)
    {
        scanf("%s", str);
        scanf("%d", &A);
        getchar();
        C = strlen(str); 

        for (B = 0; B < C; B++)
        {
            converted_str = str[B] - A; 
            if (converted_str < 65)     
            {
                converted_str += 26; 
            }
            printf("%c", converted_str);
        }
        printf("\n");
    }
    return 0;
}
