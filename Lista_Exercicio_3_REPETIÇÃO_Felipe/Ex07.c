/*Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o valor de I na
tela, decremente o valor de I em duas unidades e enquanto R menor que 10, imprima os valores
de R e I na tela e incremente o valor de R em uma unidade.*/

#include <stdio.h>

int main()

{
    int i = 0;
    float r;
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de r: ");
    scanf("%f", &r);
    while (i > 10)
    {
        printf("Valor de i  : %d\n", i);
        i -= 2;
    }
    while (r < 10)
    {
        printf("Valor de r: %.2f\n", r);
        printf("Valor de i: %d\n", i);
        r += 1;
    }

    return 0;
}