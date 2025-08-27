/*23) Faça um programa que receba um número real, encontre e mostre:
a) a parte inteira desse número;
b) a parte fracionária desse número;
c) o arredondamento desse número. */

#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;
    int arredondado;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    parteInteira = (int)numero;
    parteFracionaria = numero - parteInteira;
    arredondado = round(numero);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);
    printf("Arredondado: %d\n", arredondado);

    return 0;
}
