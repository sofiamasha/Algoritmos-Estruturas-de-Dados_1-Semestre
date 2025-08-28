/*Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que
leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule e
mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago
por essa residência com um desconto de 10%.*/

#include <stdio.h>
int main()
{

    float sm, kw, vkw, vp, nv;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &sm);

    printf("Digite o tanto q vc gasta de kilowatt: ");
    scanf("%f", &kw);
    vkw = (sm / 7) / 100;
    vp = vkw * kw;
    nv = vp * 0.9; // nv = vp - (vp*0,1)
    printf("Seu kilowatt vale: R$ %.2f\n", vkw);
    printf("Voce precisa pagar: R$ %.2f\n", vp);
    printf("O valor com desconto eh: R$ %.2f\n", nv);

    return 0;
}