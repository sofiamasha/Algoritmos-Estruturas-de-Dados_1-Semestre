/*Faça um programa que imprima os L primeiros elementos da serie de Fibonacci*/
#include <stdio.h>

int main()
{
    int L, i;
    int a = 0, b = 1, proximo;

    // Lê quantos elementos imprimir
    printf("Digite quantos elementos da série de Fibonacci deseja imprimir: ");
    scanf("%d", &L);

    if (L <= 0)
    {
        printf("Quantidade inválida!\n");
        return 0;
    }

    printf("Série de Fibonacci: ");

    for (i = 1; i <= L; i++)
    {
        if (i == 1)
        {
            printf("%d", a);
        }
        else if (i == 2)
        {
            printf(" %d", b);
        }
        else
        {
            proximo = a + b;
            printf(" %d", proximo);
            a = b;
            b = proximo;
        }
    }

    printf("\n");
    return 0;
}
