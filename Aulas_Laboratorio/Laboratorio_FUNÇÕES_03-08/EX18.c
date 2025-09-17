// Peça um numero inteiro ao usuario e mostre todos os numeros pares de 1 ate esse numero
// Ex: se o usuario digitar 12, deve aparecer 2,4,6,8,10,12;


#include <stdio.h>

void mostrarPares(int num)
{
    printf("Os pares de 1 ate %d sao: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    mostrarPares(num);
    return 0;
}
