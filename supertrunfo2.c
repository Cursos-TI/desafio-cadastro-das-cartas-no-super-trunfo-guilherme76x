#include <stdio.h>

int main() {
    char Estado1[20];
    char Codigo1[4];
    char Cidade1[20];
    int Populacao1;
    int PontosTuristicos1;
    double Area1;
    double PIB1;
    double densidadePopulacional1;
    double PIBperCapita1;

    char Estado2[20];
    char Codigo2[4];
    char Cidade2[20];
    int Populacao2;
    int PontosTuristicos2;
    double Area2;
    double PIB2;
    double densidadePopulacional2;
    double PIBperCapita2;

    printf("=== Dados da Cidade 1 ===\n");
    printf("Digite o nome do Estado: \n");
    scanf("%19s", Estado1);
    printf("Digite o Codigo Da Carta: \n");
    scanf("%3s", Codigo1);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%19s", Cidade1);
    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao1);
    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos1);
    printf("Digite a Area em KM²: \n");
    scanf("%lf", &Area1);
    printf("Digite o PIB: \n");
    scanf("%lf", &PIB1);

    densidadePopulacional1 = (double)Populacao1 / Area1;
    PIBperCapita1 = PIB1 * 1e9 / (double)Populacao1;

    printf("\n=== Dados da Cidade 2 ===\n");
    printf("Digite o nome do Estado: \n");
    scanf("%19s", Estado2);
    printf("Digite o Codigo Da Carta: \n");
    scanf("%3s", Codigo2);
    printf("Digite o Nome Da Cidade: \n");
    scanf("%19s", Cidade2);
    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao2);
    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &PontosTuristicos2);
    printf("Digite a Area em KM²: \n");
    scanf("%lf", &Area2);
    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2);

    densidadePopulacional2 = (double)Populacao2 / Area2;
    PIBperCapita2 = PIB2 * 1e9 / (double)Populacao2;

    printf("\n=== Resumo da Cidade 1 ===\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo Da Carta: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Area: %.2lf KM²\n", Area1);
    printf("PIB: %.2lf bilhões de reais\n", PIB1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2lf reais\n", PIBperCapita1);

    printf("\n=== Resumo da Cidade 2 ===\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo Da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Area: %.2lf KM²\n", Area2);
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2lf reais\n", PIBperCapita2);

    return 0;

}