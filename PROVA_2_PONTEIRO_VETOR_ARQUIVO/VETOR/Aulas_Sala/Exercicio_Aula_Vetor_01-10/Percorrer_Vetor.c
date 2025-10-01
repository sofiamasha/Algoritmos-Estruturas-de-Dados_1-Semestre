
#include <stdio.h>

int main()
{

    int vetor[11] = {0};
    int indice;
    // inicializar todos os elementos
    for (indice = 0; indice < 11; indice++)
    {
        vetor[indice] = indice;
        printf("VETOR: ");
        printf(" %d\n", vetor[indice]);
    }

    return 0;
}