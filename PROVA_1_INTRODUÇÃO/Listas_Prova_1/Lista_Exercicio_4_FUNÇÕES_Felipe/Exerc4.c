#include <stdio.h>

// Já temos a função do exercício anterior
double umSobreImpar(int n)
{
    return 1.0 / (2 * n + 1);
}

// Nova função: faz a soma dos n primeiros termos
double somaUmSobreImpar(int n)
{
    double soma = 0.0; // acumulador começa em 0

    for (int i = 1; i <= n; i++)
    {
        soma += umSobreImpar(i); // soma o i-ésimo termo
    }

    return soma; // devolve o total
}

// Procedimento para testar
void exercicio04()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double resultado = somaUmSobreImpar(n);
    printf("A soma dos %d primeiros termos da sequência é: %lf\n", n, resultado);
}

int main()
{
    exercicio04();
    return 0;
}
