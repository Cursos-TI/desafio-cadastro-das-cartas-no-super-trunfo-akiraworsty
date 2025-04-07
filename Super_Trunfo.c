#include <stdio.h>
#include <stdlib.h>

int main(){


    char estado, estado2;
    char codigocarta[50], codigocarta2[50];
    char cidade[50], cidade2[50];
    int populacao, populacao2; 
    float area, area2;
    float pib, pib2; 
    int pontosT, pontosT2;

    printf("Bem Vindo ao Cadastro de Cartas do Desafio Super Trunfo!\n");

    printf("-\n");

    printf("CARTA 1\n ");

    printf("-\n");

    printf("Por favor, insira os dados da sua primeira carta!\n");

    printf("-\n");

    printf("Nome do estado, sendo uma letra de A a H, respectivamente:\n ");
    scanf("%c", &estado);

    printf("Insira o codigo da carta, ex: A01, B02:\n ");
    scanf("%s", &codigocarta);

    printf("Insira o nome da sua cidade sem espacos:\n ");
    scanf("%s", &cidade);

    printf("Populacao:\n ");
    scanf("%d", &populacao);

    printf("Area em Km:\n ");
    scanf("%f", &area);

    printf("PIB:\n ");
    scanf("%f", &pib);

    printf("Pontos Turisticos:\n ");
    scanf("%d", &pontosT);

    printf("-\n");

    printf("CARTA 1:\n");

    printf("-\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area em Km: %f\n", area);
    printf("PIB: %f\n ", pib);
    printf("Pontos Turisticos: %d\n", pontosT);

    printf("-\n");

    printf("Agora vamos criar a segunda carta!\n");

    printf("---------------------------------------\n");
    printf("---------------------------------------\n");

    system("pause");
    
    printf("CARTA 2:\n");
    
    printf("-\n");

    printf("Por favor, insira os dados da sua segunda carta!\n");

    printf("-\n");

    printf("Nome do estado, sendo uma letra de A a H, respectivamente:\n ");
    scanf("%c", &estado2);

    printf("Insira o codigo da carta, ex: A01, B02:\n ");
    scanf("%s", &codigocarta2);

    printf("Insira o nome da sua cidade sem espacos:\n ");
    scanf("%s", &cidade2);

    printf("Populacao:\n ");
    scanf("%d", &populacao2);

    printf("Area em Km:\n ");
    scanf("%f", &area2);

    printf("PIB:\n ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos:\n ");
    scanf("%d", &pontosT2);

    printf("---------------------------------------\n");
    printf("---------------------------------------\n");


    printf("CARTA 2:\n");

    printf("-\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em Km²: %f\n", area2);
    printf("PIB: %f\n ", pib2);
    printf("Pontos Turisticos: %d\n", pontosT2);

    printf("---------------------------------------\n");
    printf("---------------------------------------\n");

    printf("Suas cartas estao prontas!\n");

    printf("-\n");

    printf("CARTA 1\n");

    printf("-\n");

    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f Km\n", area);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("Pontos Turisticos: %d\n", pontosT);

    printf("-\n");

    printf("CARTA 2\n");

    printf("-\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f Km\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosT2);


    system("pause");


}

