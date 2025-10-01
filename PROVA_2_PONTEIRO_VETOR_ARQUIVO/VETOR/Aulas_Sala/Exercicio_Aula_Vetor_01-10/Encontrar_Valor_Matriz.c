/*Peça p usuario entrar com um valor
e pesquise se o numero digitado existe ou não na matriz*/

/*Peça p usuario entrar com um valor
e pesquise se o numero digitado existe ou não na matriz*/
#include <stdio.h>
int main()
{

    int linha, coluna, valor;
    int encontrado = 0;
    printf("Digite o tamanho da sua matriz:  ");
    scanf(" %d", &linha);
    coluna = linha;

    int matriz[linha][coluna];
    int soma = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o valor da[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("Qual valor vc quer ver se tem? : ");
    scanf("%d", &valor);

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz[i][j] == valor)
            {
                encontrado++;
                printf("O valor %d foi encontrado na posição [%d][%d].\n", valor, i, j);
            }
        }
    }

    if (!encontrado)
    {
        printf("O valor nao existe\n");
    }
    printf("A matriz inserida foi: \n");

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {

            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}