/* fazer um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros positivos
m e n*/

#include <stdio.h>

// Função recursiva para calcular o MDC
int mdc(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return mdc(n, m % n);
    }
}

int main() {
    int m, n;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &m, &n);

    printf("O MDC de %d e %d é: %d\n", m, n, mdc(m, n));

    return 0;
}
