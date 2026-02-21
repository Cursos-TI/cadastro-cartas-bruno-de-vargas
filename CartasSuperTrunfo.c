#include <stdio.h>

int main() {

  char estado1, estado2;
  char codigo1[5], codigo2[5];
  char nome1[50], nome2[50];

  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;

  // NÍVEL NOVATO
  printf("Cadastro da Carta 1\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Codigo da carta: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos1);


  printf("\nCadastro da Carta 2\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Codigo da carta: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nome2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Pontos turisticos: ");
  scanf("%d", &pontos2);


  // NÍVEL AVENTUREIRO
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;

  float pibCapita1 = (pib1 * 1000000000.0) / populacao1;
  float pibCapita2 = (pib2 * 1000000000.0) / populacao2;


  // Exibição
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibCapita1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibCapita2);


  // NÍVEL MESTRE
  float super1 = populacao1 + area1 + pib1 + pontos1 + pibCapita1 + (1.0 / densidade1);
  float super2 = populacao2 + area2 + pib2 + pontos2 + pibCapita2 + (1.0 / densidade2);

  printf("\nComparacao de Cartas:\n");

  printf("Populacao: Carta %d venceu (%d)\n",
          populacao1 > populacao2 ? 1 : 2,
          populacao1 > populacao2);

  printf("Area: Carta %d venceu (%d)\n",
          area1 > area2 ? 1 : 2,
          area1 > area2);

  printf("PIB: Carta %d venceu (%d)\n",
          pib1 > pib2 ? 1 : 2,
          pib1 > pib2);

  printf("Pontos Turisticos: Carta %d venceu (%d)\n",
          pontos1 > pontos2 ? 1 : 2,
          pontos1 > pontos2);

  printf("Densidade Populacional: Carta %d venceu (%d)\n",
          densidade1 < densidade2 ? 1 : 2,
          densidade1 < densidade2);

  printf("PIB per Capita: Carta %d venceu (%d)\n",
          pibCapita1 > pibCapita2 ? 1 : 2,
          pibCapita1 > pibCapita2);

  printf("Super Poder: Carta %d venceu (%d)\n",
          super1 > super2 ? 1 : 2,
          super1 > super2);

  return 0;
}
