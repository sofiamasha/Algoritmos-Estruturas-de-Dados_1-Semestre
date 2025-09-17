/*Ler dois valores reais, determinar e escrever o menor e o maior*/

#include <stdio.h>
int main()
{
    int a, b, maior, menor;
    printf("Digite um nmr: ");
    scanf("%d", &a);
    printf("Digite um nmr: ");
    scanf("%d", &b);
    if (a > b)
    {
        maior = a;
    }
    if (b > a)
    {
        maior = b;
    }
    if (a < b)
    {
        menor = a;
    }
    else
    {
        menor = b;
    }
    printf("O menor eh %d e o maior eh %d", menor, maior);

    return 0;
}