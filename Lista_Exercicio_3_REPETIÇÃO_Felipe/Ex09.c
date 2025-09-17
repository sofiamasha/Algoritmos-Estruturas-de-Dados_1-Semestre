/*Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que forem
divisíveis por três AND múltiplos de cinco OR divisíveis por sete (sequencia anterior:  1, 3, 5,
 7, 9,...*/
#include <stdio.h>

int main()

{
    int sequencia = 1, encontrado = 0, n;

    printf("Vc quer ver ate qual numero?: ");
    scanf("%d", &n);

    while (encontrado < n)
    {

        if ((sequencia % 3 == 0 && sequencia % 5 == 0) || (sequencia % 7 == 0))
        {
            encontrado++;
            printf("o %d numero que cumpre os requisitos eh: %d\n", encontrado, sequencia);
        }
        sequencia += 2;
    }
    return 0;
}