/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : Trabalho Sudoku
Data        : 24/06/2026
Objetivo    : 
Aprendizado : <<<Descrever o que foi aprendido com este exercício>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <stdbool.h>

bool validar_linha_ou_coluna(int matriz[9][9], int index, int modo) {
    bool visto[10] = {false};
    for (int k = 0; k < 9; k++) {
        
        int numero = (modo == 0) ? matriz[index][k] : matriz[k][index];

        if (numero == 0) continue;
        if (numero < 1 || numero > 9 || visto[numero]) return false;
        
        visto[numero] = true;
    }
    return true;
}

bool verificar_tabuleiro_completo(int matriz[9][9]) {
    
    for (int i = 0; i < 9; i++) {
        if (!validar_linha_ou_coluna(matriz, i, 0) || !validar_linha_ou_coluna(matriz, i, 1)) {
            return false;
        }
    }

    for (int bloco = 0; bloco < 9; bloco++) {
        int inicio_linha = (bloco / 3) * 3;
        int inicio_coluna = (bloco % 3) * 3;
        bool visto[10] = {false};

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int numero = matriz[inicio_linha + i][inicio_coluna + j];
                if (numero == 0) continue;
                if (numero < 1 || numero > 9 || visto[numero]) return false;
                visto[numero] = true;
            }
        }
    }
    return true;
}

void imprimir_tabuleiro(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) printf(" .");
            else printf(" %d", matriz[i][j]);

            if ((j + 1) % 3 == 0 && j < 8) printf(" |");
        }
        printf("\n");
        if ((i + 1) % 3 == 0 && i < 8) printf("-------+-------+------\n");
    }
}

bool checar_vitoria(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matriz[i][j] == 0) return false;
        }
    }
    return true;
}

void exibir_alerta(char *mensagem) {
    printf("%s\n======================================\n", mensagem);
}

int main() {
    int matriz[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0}, {6, 0, 0, 1, 9, 5, 0, 0, 0}, {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3}, {4, 0, 0, 8, 0, 3, 0, 0, 1}, {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0}, {0, 0, 0, 4, 1, 9, 0, 0, 5}, {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    
    int original[9][9];
    for(int i=0; i<9; i++) for(int j=0; j<9; j++) original[i][j] = matriz[i][j];

    int linha, coluna, valor;

    while (true) {
        imprimir_tabuleiro(matriz);

        printf("Digite a linha e coluna (0-8) separadas por espaco: ");
        if (scanf("%d %d", &linha, &coluna) != 2) return 1;

        if (linha < 0 || linha > 8 || coluna < 0 || coluna > 8) {
            exibir_alerta("Valores invalidos!");
            continue;
        }

        if (original[linha][coluna] != 0) {
            exibir_alerta("Nao e possivel alterar esse valor!");
            continue;
        }

        printf("Digite o valor (1-9): ");
        if (scanf("%d", &valor) != 1) return 1;

        if (valor < 1 || valor > 9) {
            exibir_alerta("Valor invalido!");
            continue;
        }

        matriz[linha][coluna] = valor;

        if (!verificar_tabuleiro_completo(matriz)) {
            printf("Jogada invalida! Tente novamente.\n");
            matriz[linha][coluna] = 0;
        } else {
            printf("Boa jogada!\n");
            if (checar_vitoria(matriz)) {
                printf("\n");
                imprimir_tabuleiro(matriz);
                printf("\nParabens, voce ganhou!!\n");
                break;
            }
        }
        printf("======================================\n");
    }

    
    return 0;

    
}
// e assim se encerra minha curta carreira em programacao.. que venha Materiais kkk
