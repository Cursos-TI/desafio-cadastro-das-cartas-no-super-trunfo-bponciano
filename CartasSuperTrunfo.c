#include <stdio.h>

int main() {
    char estado1;
    char codigo1 [3] = "01";
    char cidade1 [20];
    int populacao1;
    float area1;
    float pib1;
    int npt1;
    float dp1;
    float pp1;

    char estado2;
    char codigo2 [3] = "02";
    char cidade2 [20];
    int populacao2;
    float area2;
    float pib2;
    int npt2;
    float dp2;
    float pp2;

    printf("Bem vindo, vamos configurar os cards de informações\n");
    printf("Iremos preencher o primeiro card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado\n");
    scanf("%s", &estado1);

    printf("Insira o nome de uma cidade\n");
    scanf("%s", &cidade1);

    printf("Insira o numero de habitantes dessa cidade\n");
    scanf("%d", &populacao1);

    printf("Insira a area quadrada dessa cidade\n");
    scanf(" %f", &area1);

    printf("Insira o ultimo PIB da cidade\n");
    scanf(" %f", &pib1);

    printf("Insira o numero de pontos turisticos dessa cidade\n");
    scanf(" %i", &npt1);
    printf("Terminamos o primeiro card");

    dp1 = populacao1 / area1;
    pp1 = pib1 / populacao1;

    printf("Iremos preencher o segundo card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado\n");
    scanf("%s", &estado2);

    printf("Insira o nome de uma cidade\n");
    scanf("%s", &cidade2);

    printf("Insira o numero de habitantes dessa cidade\n");
    scanf("%d", &populacao2);

    printf("Insira a area quadrada dessa cidade\n");
    scanf(" %f", &area2);

    printf("Insira o ultimo PIB da cidade\n");
    scanf(" %f", &pib2);

    printf("Insira o numero de pontos turisticos dessa cidade\n");
    scanf(" %i", &npt2);

    dp2 = populacao2 / area2;
    pp2 = pib2 / populacao2;

    printf("Segue abaixo os cards preenchidos\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s%c\n",codigo1, estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %0.2f Km²\n", area1);
    printf("PIB: %0.2f bilhões de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %i\n", npt1);
    printf("Densidade Populacional: %0.2f hab/km²\n", dp1);
    printf("PIB per Capita: %0.2f reais\n", pp1);
    printf("\n");

    printf("Segue abaixo os cards preenchidos\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s%c\n",codigo1, estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %0.2f Km²\n", area2);
    printf("PIB: %0.2f bilhões de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %i\n", npt2);
    printf("Densidade Populacional: %0.2f hab/km²\n", dp2);
    printf("PIB per Capita: %0.2f reais\n", pp2);
    printf("\n");

    return 0;
}
