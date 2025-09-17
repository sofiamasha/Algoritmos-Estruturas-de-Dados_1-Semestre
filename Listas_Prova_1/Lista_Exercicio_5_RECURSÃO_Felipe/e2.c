/*fazer um método recursivo que imprima de um número natural em base binária*/

#include <stdio.h>

void imprimirBinario(int n)
{
    if (n > 1)
    {
        imprimirBinario(n / 2); // chamada recursiva
    }
    printf("%d", n % 2); // imprime o bit
}

int main()
{
    int num;
    printf("Digite um número natural: ");
    scanf("%d", &num);

    printf("O número %d em binário é: ", num);
    imprimirBinario(num);
    printf("\n");

    return 0;
}
