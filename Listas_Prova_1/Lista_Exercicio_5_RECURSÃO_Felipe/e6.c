/* Fazer um método recursivo que determine se um número é ou não primo*/

#include <stdio.h>
#include <stdbool.h>

// Função auxiliar recursiva para verificar divisores
bool ehPrimoAux(int n, int i) {
    if (i == 1) return true;        // Caso base: nenhum divisor encontrado
    if (n % i == 0) return false;   // Encontrou um divisor → não primo
    return ehPrimoAux(n, i - 1);    // Chamada recursiva
}

// Função principal que verifica se n é primo
bool ehPrimo(int n) {
    if (n < 2) return false;        // Números menores que 2 não são primos
    return ehPrimoAux(n, n / 2);    // Começa a verificar do n/2 para baixo
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
