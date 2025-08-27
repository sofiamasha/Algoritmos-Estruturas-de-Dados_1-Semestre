/*Tabuada Interativa
Perguntar ao usuário qual número deseja a tabuada.
Mostrar a tabuada de 1 a 10 desse número.
Perguntar se quer ver outra tabuada. (S/N)*/

#include <stdio.h>
int main()
{
    char resp;
    int n, i;
    do
    {
        printf("De qual numero vc quer a tabuada:  ");
        scanf("%d", &n);
        i = 1;
        while (i <= 10)
        {

            printf("%d x %d = %d\n", n, i, n * i);
            i++;
        }
        printf("Deseja continuar... (S/N)");
        scanf("%c", resp);
    } while (resp != 'n' && resp != 'N');
    return 0;
}