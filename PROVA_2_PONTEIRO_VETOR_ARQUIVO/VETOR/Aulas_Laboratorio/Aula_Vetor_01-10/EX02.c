/* Implemente um programa em c que leia um vetor de N numeros inteiros (sendo n<=0)
e resolva os seguintes comandos:
1-calcule e exiba a media, o valor max e o min;
2-Informe a posicao(indice) de cada ocorrencia do valor max e o min; 
*/

#include <stdio.h>

int main() {
    int n;

    // Lê o tamanho do vetor
    printf("Digite o tamanho do vetor (N>0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }

    int vetor[n];

    // Leitura do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Inicialização do maior e menor
    // Aqui usamos o primeiro elemento do vetor
    // para garantir que funciona para números negativos também
    int maior = vetor[0];
    int menor = vetor[0];
    int soma = 0;

    // Calcula soma, maior e menor
    for (int i = 0; i < n; i++) {
        soma += vetor[i];

        if (vetor[i] > maior) {
            maior = vetor[i]; // atualiza maior
        }

        if (vetor[i] < menor) {
            menor = vetor[i]; // atualiza menor
        }
    }

    double media = (double)soma / n;

    printf("\nMedia: %.2lf\n", media);
    printf("Valor max: %d\n", maior);
    printf("Valor min: %d\n", menor);

    // Encontra posições do valor max
    printf("Posicoes do valor max: ");
    for (int i = 0; i < n; i++) {
        if (vetor[i] == maior) {
            printf("%d ", i);
        }
    }

    // Encontra posições do valor min
    printf("\nPosicoes do valor min: ");
    for (int i = 0; i < n; i++) {
        if (vetor[i] == menor) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
