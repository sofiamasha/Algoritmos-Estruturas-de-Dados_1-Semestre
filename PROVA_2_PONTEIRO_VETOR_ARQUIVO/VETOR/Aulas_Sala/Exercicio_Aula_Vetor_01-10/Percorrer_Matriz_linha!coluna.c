#include <stdio.h>

int main() {
    int linha, coluna;

    // Solicita as dimensões da matriz
    printf("Digite o número de linhas: ");
    scanf("%d", &linha);

    printf("Digite o número de colunas: ");
    scanf("%d", &coluna);

    // Declara a matriz com tamanho variável (C99 ou posterior)
    int matriz[linha][coluna];
    int soma = 0;

    // Leitura dos elementos e soma
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Exibindo a soma total
    printf("\nA soma dos elementos é: %d\n", soma);

    // Exibindo a matriz
    printf("\nA matriz inserida foi:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
