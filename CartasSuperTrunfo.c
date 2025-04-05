#include <stdio.h>
#include <stdlib.h>

int main(){
 
    char estado;
    char codigocarta[50];
    char cidade[50];
    int populacao; 
    float area;
    float pib; 
    int pontosT;

    printf("CARTA 1\n ");

    printf("Estado:\n ");
    scanf("%c", &estado);

    printf("Codigo da carta:\n ");
    scanf("%s", &codigocarta);

    printf("Cidade:\n ");
    scanf("%s", &cidade);

    printf("Populacao\n ");
    scanf("%d", &populacao);

    printf("Area em Km:\n ");
    scanf("%f", &area);

    printf("PIB:\n ");
    scanf("%f", &pib);

    printf("Pontos Turisticos:\n ");
    scanf("%d", &pontosT);


    printf("CARTA 1\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km: %f\n", area);
    printf("PIB: %f\n ", pib);
    printf("Pontos Turisticos: %d\n", pontosT);

    system("pause");


} 
