/*Ler três números reais, verificar se podem ou não ser lados de um triângulo*/

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Digite o primeiro lado: ");
    scanf("%d", &a);
    printf("Digite o segundo lado: ");
    scanf("%d", &b);
    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf(" Os valores podem formar um triângulo .\ n ");
    }
    else
    {
        printf(" Os valores NÃO podem formar um triângulo .\ n ");
    }
    return 0;
}