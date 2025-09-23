/*Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no
chão e encostada na parede e a altura da parede onde está a ponta da escada. Calcule dida dessa escada. e mostre a me-
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos. */

#include <stdio.h>
#include <math.h> // Necessário para usar sin()

int main()
{
    float anguloGraus, altura, escada, anguloRad;

    printf("CALCULO DE COMPRIMENTO DA ESCADA\n\n");

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    printf("Digite o angulo da escada com o chao (em graus): ");
    scanf("%f", &anguloGraus);

    // Converte para radianos
    anguloRad = anguloGraus * 3.14 / 180.0;

    // Calcula o comprimento da escada
    escada = altura / sin(anguloRad);

    printf("O comprimento da escada eh: %.2f metros\n", escada);

    return 0;
}
