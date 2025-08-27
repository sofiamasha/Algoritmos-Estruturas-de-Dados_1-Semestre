/* Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deverá calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos,
 o custo do espetáculo seja alcançado.*/

#include <stdio.h>
int main()
{
    float custo, preco, convites;
    printf("Quanto custa o espetaculo teatral? ");
    scanf("%f", &custo);
    printf("Quanto o convite do espetaculo teatral? ");
    scanf("%f", &preco);
    convites = custo / preco;
    printf("Terao q vender %.0f convites. ", convites);
    return 0;
}