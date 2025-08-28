/*Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar quantos
salários mínimos essa pessoa ganha.*/

#include <stdio.h>
int main()
{
    float sm, ss, tsm;
    printf("Quanto ta o salario minimo? :  ");
    scanf("%f", &sm);
    printf("Quanto eh o seu salario? :  ");
    scanf("%f", &ss);

    tsm = ss / sm;

    printf("Vc ganha %.0f salarios minimos", tsm);

    return 0;
}
