#include <stdio.h>

int main() {
    // Dados para a Carta 1
    char Estado1[20];
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    int PontosTuristicos1;
    float Area1;
    float PIB1;
    float densidadePopulacional1;
    float PIBperCapita1;

    // Dados para a Carta 2
    char Estado2[20];
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    int PontosTuristicos2;
    float Area2;
    float PIB2;
    float densidadePopulacional2;
    float PIBperCapita2;

    // Leitura dos dados para a Carta 1
    printf("Digite o nome do Estado (Carta 1): \n");
    scanf("%19s", Estado1);
    printf("Digite o Codigo Da Carta (Carta 1): \n");
    scanf("%3s", Codigo1);
    printf("Digite o Nome Da Cidade (Carta 1): \n");
    scanf("%19s", Cidade1);
    printf("Digite o numero da Populacao (Carta 1): \n");
    scanf("%d", &Populacao1);
    printf("Digite o numero de Pontos Turisticos (Carta 1): \n");
    scanf("%d", &PontosTuristicos1);
    printf("Digite a Area em KM² (Carta 1): \n");
    scanf("%f", &Area1);
    printf("Digite o PIB (Carta 1): \n");
    scanf("%f", &PIB1);

    // Leitura dos dados para a Carta 2
    printf("Digite o nome do Estado (Carta 2): \n");
    scanf("%19s", Estado2);
    printf("Digite o Codigo Da Carta (Carta 2): \n");
    scanf("%3s", Codigo2);
    printf("Digite o Nome Da Cidade (Carta 2): \n");
    scanf("%19s", Cidade2);
    printf("Digite o numero da Populacao (Carta 2): \n");
    scanf("%d", &Populacao2);
    printf("Digite o numero de Pontos Turisticos (Carta 2): \n");
    scanf("%d", &PontosTuristicos2);
    printf("Digite a Area em KM² (Carta 2): \n");
    scanf("%f", &Area2);
    printf("Digite o PIB (Carta 2): \n");
    scanf("%f", &PIB2);

    // Cálculos para a Carta 1
    densidadePopulacional1 = (float)Populacao1 / Area1;
    PIBperCapita1 = (PIB1 * 1e9) / (float)Populacao1;

    // Cálculos para a Carta 2
    densidadePopulacional2 = (float)Populacao2 / Area2;
    PIBperCapita2 = (PIB2 * 1e9) / (float)Populacao2;


    // Exibição dos resultados para a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

    // Exibição dos resultados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

     // Comparação da População
    printf("\nComparação da População:\n");
    if (Populacao1 > Populacao2) {
        printf("Carta 1 (%s - %d) tem mais população que Carta 2 (%s - %d)\n", Cidade1, Populacao1, Cidade2, Populacao2);
    } else if (Populacao1 < Populacao2) {
        printf("Carta 2 (%s - %d) tem mais população que Carta 1 (%s - %d)\n", Cidade2, Populacao2, Cidade1, Populacao1);
    } else {
        printf("Carta 1 (%s) e Carta 2 (%s) têm a mesma população (%d)\n", Cidade1, Cidade2, Populacao1);
    }

     // Determinar a carta vencedora para cada atributo
    printf("\nVencedores por atributo:\n");
    
    // População
    printf("População: ");
    printf((Populacao1 > Populacao2) ? "Carta 1\n" : ((Populacao1 < Populacao2) ? "Carta 2\n" : "Empate\n"));

    // Área
    printf("Área: ");
    printf((Area1 > Area2) ? "Carta 1\n" : ((Area1 < Area2) ? "Carta 2\n" : "Empate\n"));

    // PIB
    printf("PIB: ");
    printf((PIB1 > PIB2) ? "Carta 1\n" : ((PIB1 < PIB2) ? "Carta 2\n" : "Empate\n"));

    // Densidade Populacional
    printf("Densidade Populacional: ");
    printf((densidadePopulacional1 < densidadePopulacional2) ? "Carta 1\n" : ((densidadePopulacional1 > densidadePopulacional2) ? "Carta 2\n" : "Empate\n"));

    // PIB per Capita
    printf("PIB per Capita: ");
    printf((PIBperCapita1 > PIBperCapita2) ? "Carta 1\n" : ((PIBperCapita1 < PIBperCapita2) ? "Carta 2\n" : "Empate\n"));

     // Comparação da População
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d\n", Cidade1, Estado1, Populacao1);
    printf("Carta 2 - %s (%s): %d\n", Cidade2, Estado2, Populacao2);
    if (Populacao1 > Populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } else if (Populacao1 < Populacao2) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}