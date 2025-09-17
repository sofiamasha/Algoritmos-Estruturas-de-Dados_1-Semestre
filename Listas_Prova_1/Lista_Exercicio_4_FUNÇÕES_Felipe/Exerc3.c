/*Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 1/3,1/5,1/7,1/9... Além disso, você deve fazer um procedimento exercicio03()
para ler o valor de n e chamar a função desenvolvida nesta questão.
*/

#include <stdio.h>

// Função que retorna o n-ésimo termo da sequência
double umSobreImpar(int n) {
    return 1.0 / (2 * n + 1); // fórmula da sequência
}

// Procedimento para ler n e chamar a função
void exercicio03() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double resultado = umSobreImpar(n);
    printf("O %dº termo da sequência é: %lf\n", n, resultado);
}

int main() {
    exercicio03();
    return 0;
}
