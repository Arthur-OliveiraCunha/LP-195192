/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 04/06/2026
Objetivo    : Organizar saida de informacoes em triade.
Aprendizado : <<<Uso de Bubble sort>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char cor[10];
    char tamanho[3];
    char nome[100];   
} Pessoa;
 
int main() {
    int N;
    int caso1 = 1;

    while (scanf("%d", &N) && N != 0) {
        
        if (!caso1) {
            printf("\n");
        }
        caso1 = 0;

        Pessoa pessoas[N];

        for(int i = 0; i < N; i++){
            scanf(" %[^\n]", pessoas[i].nome);
            scanf("%s %s", pessoas[i].cor, pessoas[i].tamanho);
        }
        
        Pessoa temp;
        for(int i = 0; i < N - 1; i++){
            for(int j = 0; j < N - i - 1; j++){
                
                int trocar = 0; 

                if (strcmp(pessoas[j].cor, pessoas[j+1].cor) > 0) {
                    trocar = 1;
                } 
                else if (strcmp(pessoas[j].cor, pessoas[j+1].cor) == 0) {
                    
                    if (pessoas[j].tamanho[0] < pessoas[j+1].tamanho[0]) {
                        trocar = 1;
                    } 
                    else if (pessoas[j].tamanho[0] == pessoas[j+1].tamanho[0]) {
                        
                        if (strcmp(pessoas[j].nome, pessoas[j+1].nome) > 0) {
                            trocar = 1;
                        }
                    }
                }

                if (trocar == 1) {

                    temp = pessoas[j];
                    pessoas[j] = pessoas[j+1];
                    pessoas[j+1] = temp;
                }
            }
        }

        for(int i = 0; i < N; i++){
            printf("%s %s %s\n", pessoas[i].cor, pessoas[i].tamanho, pessoas[i].nome);
        }
    }  return 0;
}
