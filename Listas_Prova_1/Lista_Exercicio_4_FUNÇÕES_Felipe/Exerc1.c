/*Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo termo da
sequência 2, 4, 6, 8, 10, 12.... Além disso, você deve fazer um procedimento exercicio01() para ler
o valor de n e chamar a função desenvolvida nesta questão.*/

#include <stdio.h>

// Função que retorna o n-ésimo termo da sequência de pares
int par(int n)
{
    return 2 * n;
}

// Procedimento que lê n e chama a função
void exercicio01()
{
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = par(n);
    printf("O %dº termo da sequência de pares é: %d\n", n, resultado);
}

int main()
{
    exercicio01();
    return 0;
}
