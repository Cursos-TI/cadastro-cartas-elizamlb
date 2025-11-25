#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Nível Avançado
// Objetivo: Criar duas cartas, calcular densidade, PIB per capita,
// calcular super poder e comparar atributo por atributo.

int main() {

    // ================= CARTA 01 =================

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[30];
    char codigo1[4];
    char nome1[30];
    unsigned long int populacao1; // alterado para unsigned long int
    float area1;
    float pib1;
    int turisticos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1; // novo

    // Área para entrada de dados
    printf("===== Carta 01 =====\n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Super Poder = soma de todos os atributos numéricos + inverso da densidade
    superpoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibpercapita1 + (1.0f / densidade1);


    // ================= EXIBIÇÃO CARTA 01 =================

    printf("\n=== Dados da Carta 01 ===\n");
    printf("Nome do estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %lu\n" , populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);



    // ================= CARTA 02 =================

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado2[30];
    char codigo2[4];
    char nome2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    // Área para entrada de dados
    printf("\n===== Carta 02 =====\n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    superpoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibpercapita2 + (1.0f / densidade2);


    // ================= EXIBIÇÃO CARTA 02 =================

    printf("\n=== Dados da Carta 02 ===\n");
    printf("Nome do estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n" , populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);



    // ================= COMPARAÇÕES =================

    printf("\n===== Comparação de Cartas =====\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);

    // Densidade → MENOR vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);


    return 0;
}
