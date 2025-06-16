#include <stdio.h>
int main() {

printf ("Desafio Super Trunfo\n");
// Dados da carta 1

    char inicial1; // Representa a letra do inicial do estado// 
    char codigodacarta1 [10]; // Representa a letra seguida de um número de 01 a 04 //
    char nomedacidade1 [50]; // Representa o nome da cidade //
    int populacao1; // Representa a população da cidade //
    float area1; // Representa a área da cidade em km² //
    float pib1; // Representa o PIB da cidade em milhões de reais //
    int pontosturisticos1; // Representa o número de pontos turísticos da cidade //
    float densidade1; // Representa a densidade demográfica da cidade //
    float densidade2; // Representa a densidade demográfica da cidade //

    printf("\n--- Dados da Carta 1 ---\n"); // Adicionado para clareza
    printf ("Digite a letra inicial do estado: ");
    scanf (" %c", &inicial1);
    printf ("Digite o código da carta (letra seguida de número de 01 a 04): ");
    scanf ("%s", codigodacarta1);
    printf("Digite o nome da cidade: ");
    scanf (" %[^\n]", nomedacidade1);
    printf ("Digite a população da cidade: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área da cidade em km²: \n");
    scanf ("%f", &area1);
    printf ("Digite o PIB da cidade em milhões de reais: \n");
    scanf ("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontosturisticos1);

    // Calcula e armazena a densidade populacional da carta 1
    densidade1 = (float) populacao1/area1;
    printf("A densidade populacional da Carta 1 é: %.2f hab/km²\n", densidade1);

    // Dados da carta 2
    printf("\n--- Dados da Carta 2 ---\n"); // Adicionado para clareza
    char inicial2; // Representa a letra do inicial do estado// 
    char codigodacarta2 [10]; // Representa a letra seguida de um número de 01 a 04 //
    char nomedacidade2 [50]; // Representa o nome da cidade //
    int populacao2; // Representa a população da cidade //
    float area2; // Representa a área da cidade em km² //
    float pib2; // Representa o PIB da cidade em milhões de reais //
    int pontosturisticos2; // Representa o número de pontos turísticos da cidade //

  printf ("Digite a letra inicial do estado: ");
    scanf (" %c", &inicial2);
    printf ("Digite o código da carta (letra seguida de número de 01 a 04): ");
    scanf ("%s", codigodacarta2);
    printf("Digite o nome da cidade: ");
    scanf (" %[^\n]", nomedacidade2);
    printf ("Digite a população da cidade: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da cidade em km²: \n");
    scanf ("%f", &area2);
    printf ("Digite o PIB da cidade em milhões de reais: \n");
    scanf ("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontosturisticos2);
// Calcula e armazena a densidade populacional da carta 2
    densidade2 = (float) populacao2/ area2;
    printf("A densidade populacional da carta 2 é: %.2f hab/km²\n", densidade2);

// Comparação das cartas // 
// ** Adicionando uma verificação para comparar as densidades e determinar o vencedor **//

printf("\n--- Comparação das Cartas ---\n"); // Adicionado para clareza
    if (area1 > area2){
      printf("A carta 1 é a vencedora \n");
    } else {
      printf("A carta 2 é a vencedora  \n");
    }
    return 0;
  }
