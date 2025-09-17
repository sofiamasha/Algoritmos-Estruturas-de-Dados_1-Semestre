/*Ler o numerador e o denominador de uma fração e transformá-la em um número decimal.*/

#include <stdio.h>
int main()
{
    float decimal, numerador, denominador;

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    decimal = numerador / denominador;

    printf("O numero em decimal eh %.2f\n", decimal);

    return 0;
}
