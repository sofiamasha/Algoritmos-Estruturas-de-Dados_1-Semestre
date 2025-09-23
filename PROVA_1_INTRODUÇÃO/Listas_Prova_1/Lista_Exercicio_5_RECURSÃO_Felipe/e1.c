/*azer um método recursivo que recebe um número inteiro e retorna o seu fatorial.
 */

#include <stdio.h>

int Fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * Fatorial(n - 1);
    }
}

int main()
{
    int x;
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &x);

    int resultado = Fatorial(x);
    printf("O fatorial de %d é %d\n", x, resultado);
}
