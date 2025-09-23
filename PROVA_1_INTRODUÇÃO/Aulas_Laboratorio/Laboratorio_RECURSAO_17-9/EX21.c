/*Implemente uma funcao recursiva que realize a divisao de dois numeros
 inteiros positivos A(dividendo) e B(divisor) utilizando apenas subtracoes
 sucessivas*/

#include <stdio.h>

int divisao(int A, int B)
{
    // Caso base: quando A é menor que B, a divisão não é mais possível.
    if (A < B)
    {
        return 0; // Quociente é 0.
    }

    // Caso recursivo: subtrai o divisor do dividendo e chama a função recursivamente.
    return 1 + divisao(A - B, B);
}

int main()
{
    int A, B;
    printf("Entre com o dividendo (A): ");
    scanf("%d", &A);
    printf("Entre com o divisor (B): ");
    scanf("%d", &B);

    if (B == 0)
    {
        printf("Erro: Divisão por zero não é permitida!\n");
    }
    else
    {
        int resultado = divisao(A, B);
        printf("O quociente de %d dividido por %d é: %d\n", A, B, resultado);
    }

    return 0;
}
