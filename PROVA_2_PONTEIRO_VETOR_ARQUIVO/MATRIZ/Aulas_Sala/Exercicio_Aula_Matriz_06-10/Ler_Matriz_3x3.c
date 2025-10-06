/*Leia uma matriz 3x3 de elementos numericos. Calcule e escreva a soma dos elementos
que estão na diagonal principal*/
#include <stdio.h>
#define TAM 3
int main() {
    int matriz[TAM][TAM];
    
    // Leitura da matriz
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("Posicao (%d)(%d) end (%p): ", i, j, &matriz[i][j]);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Impressão da matriz
    printf("A matriz eh:\n");
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);  // Imprime o valor da matriz, não os índices
        }
        printf("\n");  // Nova linha após cada linha da matriz
    }
    
    // Cálculo da soma da diagonal principal
    int soma = 0;
    for(int i = 0; i < TAM; i++) {
        soma += matriz[i][i];
    }
    
    // Saída do resultado
    printf("Soma da diagonal principal: %d\n", soma);
    
    return 0;
}
