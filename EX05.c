/*Pedro comprou um saco de ração com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ração em gramas. A quantidade diária de ração fornecida para cada gato é sempre a
mesma. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para
cada gato, calcule e mostre quanto restará de ração no saco após cinco dias.*/

#include <stdio.h>

int main() {
    float racaoKg, porGatoGramas, racaoGramas, consumoTotal, sobraGramas, sobraKg;

    printf("Digite quantos kg tem o pacote de racao: ");
    scanf("%f", &racaoKg);

    printf("Digite a quantidade de racao (em gramas) que cada gato come por dia: ");
    scanf("%f", &porGatoGramas);

    // Converte o peso do saco para gramas
    racaoGramas = racaoKg * 1000;

    // Calcula o consumo total em 5 dias
    consumoTotal = porGatoGramas * 2 * 5;

    // Calcula sobra em gramas e converte para kg
    sobraGramas = racaoGramas - consumoTotal;
    sobraKg = sobraGramas / 1000;

    printf("Apos 5 dias, sobrara %.2f kg de racao\n", sobraKg);

    return 0;
}
