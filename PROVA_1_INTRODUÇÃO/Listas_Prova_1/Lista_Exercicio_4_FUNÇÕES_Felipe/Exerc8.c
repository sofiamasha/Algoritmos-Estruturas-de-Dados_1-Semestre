/*Fazer uma função que recebe um número inteiro n e retorna o maior elemento da sequência de
Fibonacci que seja menor que n. Além disso, você deve fazer um procedimento exercicioXX()
para chamar a função desenvolvida nesta questão.
*/

#include <stdio.h>

int Fibonacci(int n)
{

    if (n <= 1)
    {
        return 1;
    }
    int a = 1, b = 1, resultado = a;

    while (b < n)
    {
        resultado = b;
        int proximo = a + b;
        a = b;
        b = proximo;
    }
    return resultado;
}

int exercicioXX()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = Fibonacci(n);
    printf("O maior termo da sequência de Fibonacci é %d\n", resultado);
}

int main()
{
    exercicioXX();
    return 0;
}
