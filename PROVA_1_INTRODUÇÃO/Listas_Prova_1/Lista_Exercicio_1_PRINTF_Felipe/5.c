/*Ler o lado de um quadrado e mostrar o seu perímetro, área e diagonal.*/
#include <stdio.h>
#include<math.h> 
int main()
{
    float lado, perimetro, area, diagonal;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    perimetro = lado * 4;
    area = lado * lado;
    diagonal = lado * sqrt(2);

    printf("Lado: %.2f\n", lado);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);
    return 0;
}