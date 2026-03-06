#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis Carta1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;


  //Variáveis Carta2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;



  // Área para entrada de dados
// Carta1
  printf("Cadastro da Carta 1\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %s", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km²): ");
  scanf("%f", &area1 );
  
  printf("\n");

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("\n");

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\n");

// Carta2

  printf("\nCadastro da Carta 2\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %s", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km²): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);



return 0;
} 