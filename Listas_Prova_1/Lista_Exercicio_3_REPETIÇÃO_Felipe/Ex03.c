/*Faça um programa para imprimir os múltiplos de 5*/

#include <stdio.h>
int main()
{
    int m, n, i, cont = 0;
    printf("Digite qnt numeros vai querer: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Digite o %d numero", i + 1);
        scanf("%d", &m);

        if (m % 5 == 0)
        {
            cont++;
            printf("o numero %d eh multiplo de 5\n", m);
        }
        else
        {

            printf("Nao eh multiplo de 5\n");
        }
    }
    printf("Dos numeros digitados %d sao multiplos de 5", cont);

    return 0;
}