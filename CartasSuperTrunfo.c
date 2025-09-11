#include <stdio.h>

int main() {
    char estado1;
    char codigo1[3] = "01";
    char cidade1[20];
    int populacao1;
    double area1;
    double pib1;
    int npt1;
    double dp1, pp1;

    char estado2;
    char codigo2[3] = "02";
    char cidade2[20];
    int populacao2;
    double area2;
    double pib2;
    int npt2;
    double dp2, pp2;

    printf("Bem-vindo, vamos configurar os cards de informações\n");
    printf("Iremos preencher o primeiro card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado: ");
    scanf(" %c", &estado1);  // %c para ler 1 caractere

    printf("Insira o nome de uma cidade: ");
    scanf("%19s", cidade1);  // limita a 19 caracteres

    printf("Insira o numero de habitantes dessa cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a area quadrada dessa cidade (km²): ");
    scanf("%lf", &area1);

    printf("Insira o ultimo PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Insira o numero de pontos turisticos dessa cidade: ");
    scanf("%d", &npt1);

    // Calcula densidade populacional e PIB per capita
    dp1 = (area1 > 0) ? (double)populacao1 / area1 : 0;
    pp1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    printf("Terminamos o primeiro card\n\n");

    printf("Iremos preencher o segundo card\n");
    printf("--------------------------------------\n");

    printf("Insira uma letra de A a H, referente a um estado: ");
    scanf(" %c", &estado2);

    printf("Insira o nome de uma cidade: ");
    scanf("%19s", cidade2);

    printf("Insira o numero de habitantes dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a area quadrada dessa cidade (km²): ");
    scanf("%lf", &area2);

    printf("Insira o ultimo PIB da cidade (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Insira o numero de pontos turisticos dessa cidade: ");
    scanf("%d", &npt2);

    dp2 = (area2 > 0) ? (double)populacao2 / area2 : 0;
    pp2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    printf("\nSegue abaixo os cards preenchidos:\n\n");

    // --- Carta 1 ---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s%c\n", codigo1, estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", npt1);
    printf("Densidade Populacional: %.2lf hab/km²\n", dp1);
    printf("PIB per Capita: %.2lf reais\n", pp1);

    // --- Carta 2 ---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s%c\n", codigo2, estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional: %.2lf hab/km²\n", dp2);
    printf("PIB per Capita: %.2lf reais\n", pp2);

    return 0;
}
