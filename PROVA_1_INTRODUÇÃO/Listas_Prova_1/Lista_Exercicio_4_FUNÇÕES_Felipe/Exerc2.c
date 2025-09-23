/*Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número inteiro
n e mostra na tela (em ordem decrescente) todos os valores menores do que n para a sequência do
exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve utilizar a função par
desenvolvida na questão anterior. Além disso, você deve fazer um procedimento exercicio02()
para ler o valor de n e chamar a função desenvolvida nesta questão*/

#include <stdio.h>

// Função que retorna o n-ésimo par
int par(int n)
{
    return 2 * n;
}

// Mostra os pares menores que n, em ordem decrescente
void mostrarParesEmOrdemDecrescente(int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        printf("%d ", par(i));
    }
    printf("\n");
}

// Procedimento que chama a função
void exercicio02()
{
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    printf("Pares menores que %d em ordem decrescente:\n", 2 * n);
    mostrarParesEmOrdemDecrescente(n);
}

int main()
{
    exercicio02();
    return 0;
}
