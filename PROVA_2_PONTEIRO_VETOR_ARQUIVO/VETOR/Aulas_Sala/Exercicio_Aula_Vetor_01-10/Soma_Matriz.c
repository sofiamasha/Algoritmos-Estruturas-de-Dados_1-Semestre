
/*Escreva um programa em c para calcular a soma de todos os elementos de uma matriz NXN
Lembre-se de perguntar o tamanho da matriz, faça a leitura dos 
dados e calcule a soma de todos os elementos. */

#include <stdio.h>

int main() {
    int linha, coluna;
    
    // Pergunta o tamanho da matriz
    printf("Digite o tamanho da matriz (N x N): ");
    scanf("%d", &linha);
    coluna = linha; // Como é uma matriz quadrada, número de colunas é igual ao número de linhas.

    // Definindo a matriz para armazenar os valores
    int matriz[linha][coluna];
    int soma = 0;

    // Leitura dos elementos da matriz e cálculo da soma
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);  // Leitura de inteiros
            soma += matriz[i][j];        // Acumulando a soma
        }
    }

    // Exibindo a matriz e a soma total dos elementos
    printf("\nA matriz inserida foi:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);  
        }
        printf("\n");
    }

    // Exibindo a soma dos elementos
    printf("\nA soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}
