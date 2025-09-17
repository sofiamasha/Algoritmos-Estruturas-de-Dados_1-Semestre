/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga
CPMF de 0,38% e o saldo inicial da conta está zerado..*/

#include <stdio.h>

int main()
{
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

    // Entrada do salário
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    // Valores dos cheques
    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);
    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);

    // Calcula CPMF de cada saque (0,38%)
    cpmf1 = cheque1 * 0.0038;
    cpmf2 = cheque2 * 0.0038;

    // Saldo final
    saldo = salario - (cheque1 + cpmf1 + cheque2 + cpmf2);

    printf("Seu saldo atual eh: R$ %.2f\n", saldo);

    return 0;
}
