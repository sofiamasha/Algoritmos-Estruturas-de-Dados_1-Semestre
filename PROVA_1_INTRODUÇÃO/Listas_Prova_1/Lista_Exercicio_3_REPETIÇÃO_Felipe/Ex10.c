/*seja a sequência da questão anterior, mostre somente os elementos maiores que a e menores que
b, onde a e b são lidos do teclado. (sequencia anterior:  1, 3, 5,
 7, 9,...*/
#include <stdio.h>

int main()

{
    int sequencia = 1, encontrado = 0, n;
    int a, b;

    printf("Vc quer ver ate qual numero?: ");
    scanf("%d", &n);
    printf("Digite o valor e a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    while (encontrado < n)
    {

        if (sequencia > a && sequencia > b)
        {
            encontrado++;
            printf("o %d numero que cumpre os requisitos eh: %d\n", encontrado, sequencia);
        }
        sequencia += 2;
    }
    return 0;
}