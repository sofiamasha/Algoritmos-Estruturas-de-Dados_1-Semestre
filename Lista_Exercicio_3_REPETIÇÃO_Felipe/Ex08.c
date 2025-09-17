/*Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,...*/

#include <stdio.h>

int main()

{
    int sequencia = 1, n;

    printf("Vc quer ver ate qual numero?: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("o %d numero eh: %d\n", i, sequencia);
        sequencia += 2;
    }
    return 0;
}