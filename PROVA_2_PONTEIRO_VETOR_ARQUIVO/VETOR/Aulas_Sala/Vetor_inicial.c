

#include <stdio.h>

int main()
{
   int vetor [10];
   for(int i=0; i<10; i++){
       printf("Digite o %d numero: ", i+1);
       scanf("%d", &vetor[i]);
       
   }
   for(int i=0; i<10; i++){
       printf(" %d\n", vetor[i]);
   }
   printf("\n");
    return 0;
}