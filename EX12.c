/*Ler um numero inteiro. se ele for paer calcuylar
 e escrever o seu quarado e se for impar calculcAR E ESCREVER SEU CUBO*/

#include <stdio.h>
#include <math.h>

int main() {
   int num, resp;
   printf("Entre com um numero: \n");
   scanf("%d", &num);

   if(num%2==0){
    resp=pow(num,2);
   } else{
    resp=pow(num,3);
   }
printf(" O resultado eh: %d", resp);
    return 0;
}
