#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
   char estado1 [30];
   char codigo1 [3];
   char nome1 [30];
   int populacao1;
   float area1; 
   float pib1;
   int turisticos1;
  // Área para entrada de dados
    printf("Carta 01\n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turisticos1);

  // Área para exibição dos dados da cidade
 
    printf("Nome do estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n" , populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);

    // Área para definição das variáveis para armazenar as propriedades das cidades
   char estado2 [30];
   char codigo2 [3];
   char nome2 [30];
   int populacao2;
   float area2;
   float pib2;
   int turisticos2;

   // Área para entrada de dados
    printf("Carta 02\n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos2);

  // Área para exibição dos dados da cidade
 
    printf("Nome do estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n" , populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    

return 0;
} 
