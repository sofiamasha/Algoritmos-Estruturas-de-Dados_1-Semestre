/*if (l1 < l2) {
    // executa se l1 for menor
}
if (l1 > l2) {
    // executa se l1 for maior
} else {
    // esse else pertence SOMENTE ao segundo if
}
*/

/*Ler dois caracteres e escreve-los em ordem alfabética.*/

#include <stdio.h>
int main()
{
    char l1, l2, primeiro, segundo;
    printf("Digite uma letra: ");
    scanf(" %c", &l1);
    printf("Digite outra letra: ");
    scanf(" %c", &l2);
    if (l1 < l2)
    {
        primeiro = l1;
        segundo = l2;
    }
    else if (l1 > l2)
    {
        primeiro = l2;
        segundo = l1;
    }
    else
    {
        printf("As letras sao iguais");
        return 0;
    }
    printf("A ordem eh %c  %c", primeiro, segundo);

    return 0;
}