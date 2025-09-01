#include <stdio.h>

int main() {
    char estado1;
    char codigo1 [3] = "01";
    char cidade1 [20];
    float populacao1;
    float area1;
    float pib1;
    int npt1;

    char estado2;
    char codigo2 [3] = "02";
    char cidade2 [20];
    float populacao2;
    float area2;
    float pib2;
    int npt2;

    printf("Bem vindo, vamos configurar os cards de informações\n");
    printf("Iremos preencher o primeiro card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado\n");
    scanf("%s", &estado1);

    printf("Insira o nome de uma cidade\n");
    scanf("%s", &cidade1);

    printf("Insira o numero de habitantes dessa cidade\n");
    scanf("%f", &populacao1);

    printf("Insira a area quadrada dessa cidade\n");
    scanf("%f", &area1);

    printf("Insira o ultimo PIB da cidade\n");
    scanf("%f", &pib1);

    printf("Insira o numero de pontos turisticos dessa cidade\n");
    scanf("%i", &npt1);
    printf("Terminamos o primeiro car");

    printf("Iremos preencher o segundo card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado\n");
    scanf("%s", &estado2);

    printf("Insira o nome de uma cidade\n");
    scanf("%s", &cidade2);

    printf("Insira o numero de habitantes dessa cidade\n");
    scanf("%f", &populacao2);

    printf("Insira a area quadrada dessa cidade\n");
    scanf("%f", &area2);

    printf("Insira o ultimo PIB da cidade\n");
    scanf("%f", &pib2);

    printf("Insira o numero de pontos turisticos dessa cidade\n");
    scanf("%i", &npt2);

    printf("Segue abaixo os cards preenchidos\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s%c\n",codigo1, estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %0.2f\n", populacao1);
    printf("Area: %0.2f\n", area1);
    printf("PIB: %0.2f\n",pib1);
    printf("Numero de Pontos Turisticos: %i\n", npt1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s%c\n",codigo2, estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %0.2f\n", populacao2);
    printf("Area: %0.2f\n", area2);
    printf("PIB: %0.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %i\n", npt2);
    printf("\n");

    return 0;
}