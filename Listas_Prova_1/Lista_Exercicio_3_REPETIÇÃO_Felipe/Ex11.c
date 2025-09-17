/*seja a sequência da questão anterior, mostre somente os elementos maiores que a e menores que
b, onde a e b são lidos do teclado. (sequencia anterior:  1, 3, 5,
 7, 9,...*/
#include <stdio.h>

int main()

{
    int sequencia = 1;
    int a, b;

    printf("Digite o valor e a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (b <= a)
    {
        printf("intervallo invalido.");
        return 0;
    }

    printf(" Elementos da sequência maiores que %d e menores que %d : ",
           a, b);

    while (sequencia < b)
    {

        if (sequencia > a)
        {

            printf(" %d", sequencia);
        }
        sequencia += 2;
    }
    printf("\n");
    return 0;
}