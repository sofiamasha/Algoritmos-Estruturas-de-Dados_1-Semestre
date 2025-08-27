/*Numeros primos:
ler numeros inteiros ate que seja digitado 0
para cada numero digitado verificar e mostrar se ele é primo ou nao*/

#include <stdio.h>
int main()
{
    int n;

    printf("Digite um numero: \n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            printf("O numero n eh primo\n");
        }
        else
        {
            printf("O numero eh primo\n");
        }
        printf("Digite um numero: \n");
        scanf("%d", &n);
    }

    return 0;
}