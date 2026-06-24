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
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;


int comparar(const void *a, const void *b) {
    Camiseta *c1 = (Camiseta *)a;
    Camiseta *c2 = (Camiseta *)b;

    
    int comp_cor = strcmp(c1->cor, c2->cor);
    if (comp_cor != 0) return comp_cor;

    
    if (c1->tamanho != c2->tamanho) {
        
        if (c1->tamanho == 'P') return -1;
        if (c2->tamanho == 'P') return 1;
        if (c1->tamanho == 'M' && c2->tamanho == 'G') return -1;
        if (c1->tamanho == 'G' && c2->tamanho == 'M') return 1;
    }


    return strcmp(c1->nome, c2->nome);
}

int main() {
    int N;
    int primeiro_caso = 1;

    
    while (scanf("%d", &N) == 1 && N != 0) {
        
        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        Camiseta lista[N];

        for (int i = 0; i < N; i++) {
            
            getchar(); 
            fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
            
            lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

            
            scanf("%s %c", lista[i].cor, &lista[i].tamanho);
        }

        qsort(lista, N, sizeof(Camiseta), comparar);

        for (int i = 0; i < N; i++) {
            printf("%s %c %s\n", lista[i].cor, lista[i].tamanho, lista[i].nome);
        }
    }

    return 0;
}


