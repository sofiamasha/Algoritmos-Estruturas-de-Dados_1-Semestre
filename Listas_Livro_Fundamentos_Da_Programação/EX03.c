/* 3- Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um programa que receba
o valor do salário mínimo e a quantidade de quilowatts consumida por uma residência. Calcule e
mostre:
a) o valor de cada quilowatt;
b) o valor a ser pago por essa residência;
c) o valor a ser pago com desconto de 15%. */

#include <stdio.h>
int main()
{
    float salario, kilo, consumo, consumos, desconto, txcomdesconto;
    printf("Digite quanto vc recebe de salario: ");
    scanf("%f", &salario);
    printf("Digite quanto vc consume de quilowatts: ");
    scanf("%f", &consumo);

    kilo = 0.2 * salario;
    consumos = consumo * kilo;
    desconto = 0.15 * consumos;
    txcomdesconto = consumos - desconto;
    printf("   O seu kilowats custa R$%.2f reais\n", kilo);
    printf("  Voce consome R$%.2f reais\n", consumos);
    printf("   Com desconto custa R$%.2f reais", txcomdesconto);
    return 0;
}