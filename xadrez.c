#include <stdio.h>

// Definições de constantes para as direções
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Declaração das variáveis para controle dos movimentos
    int i; // Variável para controle de repetição nas movimentações

    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo (Diagonal superior direita):\n");
    for (i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");   // Movimenta uma casa para cima
        printf("Direita\n"); // Movimenta uma casa para a direita
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre (Para a direita):\n");
    i = 0; // Reinicializa o contador para a torre
    while (i < MOVIMENTO_TORRE) {
        printf("Direita\n"); // Movimenta uma casa para a direita
        i++; // Incrementa a contagem do loop
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha (Para a esquerda):\n");
    i = 0; // Reinicializa o contador para a rainha
    do {
        printf("Esquerda\n"); // Movimenta uma casa para a esquerda
        i++; // Incrementa a contagem do loop
    } while (i < MOVIMENTO_RAINHA);

    return 0;
}
