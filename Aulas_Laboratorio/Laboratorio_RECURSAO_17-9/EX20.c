/*Calcular o expoente usando recursão*/

#include <stdio.h>

int exponencial(int base, int expoente)
{
    int resp = 0;
    if (expoente == 0)
    {

        resp = 1;
    }
    else
    {
        resp = base * exponencial(base, expoente - 1);
    }
    return resp;
}

int main()
{
    int b, e;
    printf(" Entre com a base: ");
    scanf("%d", &b);
    printf(" Entre com o expoente: ");
    scanf("%d", &e);
    int solucao = exponencial(b, e);
    printf("o valor do exponecial eh: %d", solucao);

    return 0;
}