/*Fazer um programa para ler n números inteiros e imprimir a soma deles. O n valor de deve ser
lido do teclado.*/

#include <stdio.h>
int main()
{
    int n, q, soma = 0;
    printf("Digite qnts numeros vc quer somar: ");
    scanf("%d", &q);

    for (int i = 1; i <= q; i++)
    {
        printf("Digite o %d numero\n", i);
        scanf("%d", &n);
        soma += n;
    }
    printf("A soma dos numeros eh: %d", soma);

    return 0;
}