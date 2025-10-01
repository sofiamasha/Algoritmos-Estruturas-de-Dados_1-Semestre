#include <stdio.h>

int main() {
    int linha = 2, coluna = 2;
    char vetor[linha][coluna];  

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("Digite um caractere para [%d][%d]: ", i, j);
            scanf(" %c", &vetor[i][j]);  
        }
    }

    printf("\nOs valores inseridos no vetor são:\n");
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            printf("%c ", vetor[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
