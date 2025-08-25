#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int Torre = 5;   // Torre anda 5 casas
    int Bispo = 5;   // Bispo anda 5 casas
    int Rainha = 8;  // Rainha anda 8 casas

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do Bispo: 5 casas para cima e direita:\n");
    int i = 1;
    while (i <= Bispo) {
        printf("Cima Direita na diagonal da casa que está\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre: 5 casas para a direita:\n");
    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha: 8 casas para a esquerda:\n");
    int n = 1;
    do {
        printf("Esquerda\n");
        n++;
    } while (n <= Rainha);   
    
    return 0;
}
