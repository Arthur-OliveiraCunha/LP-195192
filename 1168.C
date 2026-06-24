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
#include <string.h>
 
int main() {
 
    int N;
    char O[100000];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        
        int leds = 0; 

        scanf("%s", O);

        int tamanho = strlen(O);

        for (int j = 0; j < tamanho; j++) {
            
            switch (O[j]) {
                
                case '1': 
                    leds += 2; break;
                
                case '2': 
                    leds += 5; break;
                
                case '3': 
                    leds += 5; break;
                
                case '4': 
                    leds += 4; break;
                
                case '5': 
                    leds += 5; break;
                
                case '6': 
                    leds += 6; break;
                
                case '7': 
                    leds += 3; break;
               
                case '8': 
                    leds += 7; break;
               
                case '9': 
                    leds += 6; break;
                
                case '0': 
                    leds += 6; break;
            }
        }

        
        printf("%d leds\n", leds);
    }

    return 0;
}

