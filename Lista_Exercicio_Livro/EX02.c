/*13) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: a) a idade dessa pessoa; b) quantos anos ela terá em 2050.  */

#include <stdio.h>
int main()
{
    int anonas, anoat, idadeat, ano50;
    printf("Quando vc nasceu? ");
    scanf("%d", &anonas);
    printf("Que ano estamos? ");
    scanf("%d", &anoat);
    idadeat = anoat - anonas;
    printf("Ola, vc tem %d anos\n", idadeat);
    ano50 = 2050 - anonas;
    printf("Em 2050 vc tera %d anos\n", ano50);

    return 0;
}