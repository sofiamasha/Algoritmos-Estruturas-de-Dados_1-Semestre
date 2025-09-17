/*Fazer uma função que recebe um número inteiro n e retorna o n-ésimo termo da sequência de
Fibonacci. Além disso, você deve fazer um procedimento exercicioXX() para chamar a função
desenvolvida nesta questão*/

#include <stdio.h>

int Fibonacci(int n){

 if (n == 1 || n == 2)
  {
    return 1;
  }


    int resultado ;
      int a=1,b=1;
     for (int i = 3; i <= n; i++)
    {
    resultado=a+b;
a=b;
b=resultado;
}
  
    return resultado; 
}

int exercicioXX(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = Fibonacci(n);
    printf("O %dº termo da sequência de Fibonacci é %d\n", n, resultado);
}



int main(){
    exercicioXX();
    return 0;
}
