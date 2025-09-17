/*Fazer uma função que recebe um número inteiro n e retorna o seu fatorial1
. Além disso, você
deve fazer um procedimento exercicio08() para ler o valor de n e chamar a função desenvolvida
nesta questão.
*/

#include <stdio.h>

int fatorial(int n)
{
    int resultado = 1;
    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}

// Procedimento para ler n e chamar a função
void exercicio08()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = fatorial(n);
    printf("o fatorial de %d eh %d\n", n, resultado);
}

int main()
{
    exercicio08();
    return 0;
}
