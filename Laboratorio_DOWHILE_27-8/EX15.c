/*Numeros primos:
ler numeros inteiros ate que seja digitado 0
para cada numero digitado verificar e mostrar se ele é primo ou nao*/

/*Se quiser contar quantos divisores tem:
depois do primeiro printf adiciona:
while(num!=0){
divisor=0;
i=num;
while(i>0){
if(num%i==0) divisor ++;
i--;
}
if
}*/
#include <stdio.h>
int main()
{
    int n;

    printf("Digite um numero: \n");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            printf("O numero n eh primo\n");
        }
        else
        {
            printf("O numero eh primo\n");
        }
        printf("Digite um numero: \n");
        scanf("%d", &n);
    }

    return 0;
}