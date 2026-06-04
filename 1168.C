/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : <<<Arthur de Oliveira Cunha>>>
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 04/06/2026
Objetivo    : Descobrir a quantidade de Leds necessarios.
Aprendizado : <<<Uso de funcao case>>>
Pergunta de segunda ordem: <<<Fazer a pergunta>>>
-------------------------------------------------------------------------- */


#include <stdio.h>
 
int main() {
    int N;
    char n[1000000];
    int qtd_leds = 0;
    
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        scanf("%s", n);
        
        for(int j = 0; n[j] != '\0'; j++){
            switch(n[j]){

                case '1':
                    qtd_leds += 2;
                    break;

                case '2':
                    qtd_leds += 5;
                    break;

                case '3':
                    qtd_leds += 5;
                    break;

                case '4':
                    qtd_leds += 4;
                    break;

                case '5':
                    qtd_leds += 5;
                    break;

                case '6':
                    qtd_leds += 6;
                    break;

                case '7':
                    qtd_leds += 3;
                    break;

                case '8':
                    qtd_leds += 7;
                    break;

                case '9':
                    qtd_leds += 6;
                    break;

                case '0':
                    qtd_leds += 6;
                    break;
            }
        }
        
    printf("%d leds\n", qtd_leds);

    qtd_leds = 0;
        
    }
 
    return 0;
}
