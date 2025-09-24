#include <stdio.h>

int main()
{
    int num;
    printf("Digite um num de 1 a 7\n");
    scanf("%d", &num);

    switch (num)
    {

    case 1:
        printf("Hoje eh domingo");
        break;
    case 2:

        printf("Hoje eh segunda");
        break;

    case 3:
        printf("Hoje eh terca");
        break;

    case 4:
        printf("Hoje eh quarta");
        break;
    case 5:
        printf("Hoje eh quinta");
        break;

    case 6:
        printf("Hoje eh sexta");
        break;
    case 7:
        printf("Hoje eh sabado");
        break;
    default:
        printf("Digite um numero valido");
    }

    return 0;
}