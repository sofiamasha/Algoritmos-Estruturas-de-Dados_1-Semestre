/*Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início
do dia.*/


#include <stdio.h>
int main() {
    int hora, minuto, total;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minuto);

    total = hora * 60 + minuto;

    printf("Ja se passaram %d minutos desde o inicio do dia.\n", total);

    return 0;
}

